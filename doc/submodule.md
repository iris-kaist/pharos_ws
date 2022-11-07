## Submodule 사용법
패키지 그룹별로 서브모듈로 구성됨(pharos, pharos_map ...)   
pharos_ws clone시, --recursive 옵션 사용
```bash
git clone git@github.com:iris-kaist/pharos_ws.git --recursive
```
다른 레포지토리를 서브모듈로 추가하고 싶을 때
```bash
git submodule add [깃 url] [경로]
```
서브모듈이 포함된 레포지토리를 서브모듈로 추가 했을 때
```bash
git submodule update --init --recursive
```
서브모듈을 삭제할 땐 
```bash
git rm -f [삭제할 모듈 경로]
```
명령어 실행 후 .git/modules/ 경로의 파일도 같이 지워줘야 이후 같은 이름의 서브모듈 추가 시 오류가 나지 않음
