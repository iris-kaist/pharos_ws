#include <ros_h264_streamer/h264_receiver.h>

#include <boost/program_options.hpp>
namespace po = boost::program_options;
#include <iomanip>

int main(int argc, char * argv[])
{
  #ifndef WIN32
  ros::init(argc, argv, "ros_h264_streamer_test_receiver");
  ros::NodeHandle nh;
  ros::NodeHandle pnh("~");
  #endif

  bool pub_;
  bool udp_;
  bool server_;
  int width_;
  int height_;
  int port_;
  std::string host_;
  std::string pub_topic_;
  std::string pub_frame_id_;
  ros_h264_streamer::H264Receiver::Config conf;

  pnh.param("pub", pub_, true);
  pnh.param("udp", udp_, true);
  pnh.param("server", server_, false);
  pnh.param<int>("width", width_, 640);
  pnh.param<int>("height", height_, 360);
  pnh.param<int>("port", port_, 38000);
  pnh.param<std::string>("host", host_, "192.168.2.202");
  pnh.param<std::string>("pub_topic", pub_topic_, "/ros_h264_receiver/rgb/image_raw");
  pnh.param<std::string>("pub_frame_id", pub_frame_id_, "front_cam");

  conf.publish = pub_;
  conf.publish_topic = pub_topic_;
  conf.publish_frame_id = pub_frame_id_;

  po::options_description desc("testStreamer options");
  desc.add_options()
    ("help", "display help message")
    ("width", po::value<int>(&conf.width)->default_value(width_), "image width")
    ("height", po::value<int>(&conf.height)->default_value(height_), "image height")
    ("udp,u", po::value<bool>(&conf.udp)->default_value(udp_), "connection type; valid values are tcp and udp")
    ("server,s", po::value<bool>(&conf.server)->default_value(server_), "is this a server?")
    ("port,p", po::value<unsigned short>(&conf.port)->default_value(port_), "connection port")
    ("host,h", po::value<std::string>(&conf.host)->default_value(host_), "connection host (irrelevant for server mode");

  po::variables_map vm;
  po::store(po::parse_command_line(argc, argv, desc), vm);
  po::notify(vm);
  std::cout<<conf.port<<" "<<port_<<std::endl;
  if(vm.count("help"))
  {
    std::cout << desc << std::endl;
    return 1;
  }

  #ifndef WIN32
  ros_h264_streamer::H264Receiver receiver(conf, nh);
  #else
  ros_h264_streamer::H264Receiver receiver(conf);
  #endif

  #ifndef WIN32
  ros::Time tin = ros::Time::now();
  sensor_msgs::ImagePtr img(new sensor_msgs::Image);
  unsigned int frames_in = 0;
  while(ros::ok())
  {
    if(receiver.getLatestImage(img))
    {
      frames_in++;
      if(frames_in == 10)
      {
        ros::Time tout = ros::Time::now();
        ros::Duration dt = tout - tin;
        tin = tout;
        std::cout << "\rReceiving at " << 1e10/dt.toNSec() << "Hz" << std::flush;
        frames_in = 0;
      }
    }
  }
  #else
  sensor_msgs::ImagePtr img(new sensor_msgs::Image);
  long long ptick = 0;
  long long tick = 0;
  long long qPerfF = 0;
  QueryPerformanceFrequency((LARGE_INTEGER*)&qPerfF);
  double f = 0;
  unsigned int fc = 0;
  while(1)
  {
    if(receiver.getLatestImage(img))
    {
        if(fc == 0)
        {
            QueryPerformanceCounter((LARGE_INTEGER*)&tick);
            f = 10*(double)qPerfF/((double)tick - (double)ptick);
            std::cout << "\rCurrent frequency: " << f << "Hz" << std::flush;
            ptick = tick;
        }
        ++fc;
        if(fc == 10) fc = 0;
    }
  }
  #endif

  return 0;
}
