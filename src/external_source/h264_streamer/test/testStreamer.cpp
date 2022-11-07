#include <ros_h264_streamer/h264_streamer.h>

#include <boost/program_options.hpp>
namespace po = boost::program_options;

int main(int argc, char * argv[])
{
  ros::init(argc, argv, "ros_h264_streamer_test_streamer");
  ros::NodeHandle nh;
  ros::NodeHandle pnh("~");


  bool pub_;
  bool udp_;
  bool server_;
  int width_;
  int height_;
  int quality_;
  int fps_num_;
  int fps_den_;
  int port_;
  std::string host_;
  std::string sub_topic_;
  ros_h264_streamer::H264Streamer::Config conf;

  pnh.param("pub", pub_, true);
  pnh.param("udp", udp_, true);
  pnh.param("server", server_, true);
  pnh.param<int>("width", width_, 640);
  pnh.param<int>("height", height_, 360);
  pnh.param<int>("quality", quality_, 28);
  pnh.param<int>("fps_num", fps_num_, 30);
  pnh.param<int>("fps_den", fps_den_, 1);
  pnh.param<int>("port", port_, 1);
  pnh.param<std::string>("host", host_, "127.0.0.1");//just try >> server-localhost; client-server_ip
  pnh.param<std::string>("sub_topic", sub_topic_, "/usb_cam/image_raw");

  po::options_description desc("testStreamer options");
  desc.add_options()
    ("help", "display help message")
    ("udp,u", po::value<bool>(&conf.udp)->default_value(udp_), "connection type; valid values are tcp and udp")
    ("server,s", po::value<bool>(&conf.server)->default_value(server_), "is this a server?")
    ("port,p", po::value<unsigned short>(&conf.port)->default_value(port_), "connection port")
    ("host,h", po::value<std::string>(&conf.host)->default_value(host_), "connection host (irrelevant for server mode")
    ("quality,q", po::value<int>(&conf.quality)->default_value(quality_), "Encoding quality setting, range from 1 (highest quality) to 100 (lowest quality)")
    ("low-quality", "Set video quality to a low setting")
    ("high-quality", "Set video quality to a high setting")
    ("topic,t", po::value<std::string>(&conf.camera_topic)->default_value(sub_topic_), "camera topic to stream")
    ("fps_num", po::value<int>(&conf.fps_num)->default_value(30), "FPS numerator value, will be also interpreted as camera real fps")
    ("fps_den", po::value<int>(&conf.fps_den)->default_value(1), "FPS denominator value, will be interpreted as sub-sampling denominator");

  po::variables_map vm;
  po::store(po::parse_command_line(argc, argv, desc), vm);
  po::notify(vm);

  if(vm.count("help"))
  {
    std::cout << desc << std::endl;
    return 1;
  }
  if(vm.count("low-quality"))
  {
    conf.quality = 35;
  }
  if(vm.count("high-quality"))
  {
    conf.quality = 20;
  }

  ros_h264_streamer::H264Streamer streamer(conf, nh);

  while(ros::ok())
  {
    ros::spin();
  }

  return 0;
}
