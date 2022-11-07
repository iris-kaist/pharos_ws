## Submodule 사용법
패키지 그룹별로 서브모듈로 구성됨(pharos, pharos_map ...)   
pharos_ws clone시, --recursive 옵션 사용
```bash
git clone git@github.com:iris-kaist/pharos_ws.git --recursive
```
외부 깃을 서브모듈로 추가하고 싶을 때
```bash
git submodule add [깃 url] [경로]
```
서브모듈이 포함된 깃을 서브모듈로 추가 했을 때
```bash
git submodule update --init --recursive
```
