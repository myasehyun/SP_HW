# 🐧 리눅스 및 시스템 도구 정리

## 📂 파일 및 디렉터리 명령어

| 명령어 | 형식 | 설명 | 예시 |
|--------|------|------|------|
| `ls` | `ls [옵션] [디렉터리]` | 디렉터리 내 파일 목록 출력 | `ls -l /home/user` |
| `cp` | `cp [옵션] 원본 대상` | 파일 또는 디렉터리 복사 | `cp file1.txt backup.txt` |
| `mv` | `mv 원본 대상` | 파일 또는 디렉터리 이동 또는 이름 변경 | `mv oldname.txt newname.txt` |
| `rm` | `rm [옵션] 파일` | 파일 또는 디렉터리 삭제 | `rm -rf temp/` |
| `chmod` | `chmod [옵션] 모드 파일` | 파일 권한 변경 | `chmod 755 run.sh` |
| `file` | `file 파일명` | 파일의 타입 정보 출력 | `file image.jpg` |
| `find` | `find [경로] [조건]` | 조건에 맞는 파일 검색 | `find . -name "*.c"` |

---

## 🔧 프로세스 제어 명령어

| 명령어 | 형식 | 설명 | 예시 |
|--------|------|------|------|
| `ps` | `ps [옵션]` | 현재 실행 중인 프로세스 목록 확인 | `ps aux` |
| `top` | `top` | 실시간 시스템 리소스 및 프로세스 모니터링 | `top` |
| `kill` | `kill PID` 또는 `kill -9 PID` | 지정한 PID의 프로세스 종료 | `kill 1234` |
| `jobs` | `jobs` | 백그라운드 작업 목록 확인 | `jobs` |
| `fg` | `fg [%작업번호]` | 백그라운드 작업을 포그라운드로 전환 | `fg %1` |
| `bg` | `bg [%작업번호]` | 중지된 작업을 백그라운드에서 실행 | `bg %2` |
| `nice` | `nice -n 우선순위 명령어` | 프로세스 실행 시 우선순위 설정 | `nice -n 10 ./run.sh` |
| `nohup` | `nohup 명령어 &` | 세션 종료 후에도 명령 실행 유지 | `nohup ./server &` |
| `time` | `time 명령어` | 명령어 수행 시간 측정 | `time ls -l` |

---

## 🌐 네트워크 관련 명령어

| 명령어 | 형식 | 설명 | 예시 |
|--------|------|------|------|
| `ping` | `ping [옵션] 호스트` | 네트워크 연결 상태 확인 | `ping google.com` |
| `netstat` | `netstat [옵션]` | 네트워크 상태 및 포트 확인 | `netstat -tuln` |
| `hostname` | `hostname` | 호스트 이름 출력 또는 설정 | `hostname` |
| `ifconfig` | `ifconfig` | 네트워크 인터페이스 설정 및 확인 | `ifconfig eth0` |
| `ssh` | `ssh 사용자@호스트` | 원격 서버 접속 | `ssh user@192.168.0.1` |

---

## 📁 파일 입출력 및 파이프

| 명령어 | 형식 | 설명 | 예시 |
|--------|------|------|------|
| `>` | `명령어 > 파일` | 출력 결과를 파일에 덮어쓰기 | `echo hello > out.txt` |
| `>>` | `명령어 >> 파일` | 출력 결과를 파일에 추가 | `echo world >> out.txt` |
| `<` | `명령어 < 파일` | 파일을 입력으로 사용 | `sort < names.txt` |
| `<<` | `명령어 << 문자열` | here-document 입력 방식 사용 | `cat << EOF` |
| `|` | `명령어1 | 명령어2` | 출력과 입력 연결 (파이프라인) | `cat file | grep error` |

---

## 🔍 텍스트 필터 명령어

| 명령어 | 형식 | 설명 | 예시 |
|--------|------|------|------|
| `cut` | `cut -d'구분자' -f필드 파일` | 텍스트 필드 추출 | `cut -d',' -f1 data.csv` |
| `sort` | `sort [옵션] 파일` | 정렬 | `sort -n scores.txt` |
| `uniq` | `uniq [옵션] 파일` | 중복 제거 | `sort data.txt | uniq` |
| `wc` | `wc [옵션] 파일` | 행, 단어, 문자 수 출력 | `wc -l file.txt` |
| `tr` | `tr 문자1 문자2` | 문자 치환 | `tr a-z A-Z < text.txt` |
| `grep` | `grep '패턴' 파일` | 특정 패턴 검색 | `grep "error" log.txt` |

---

## 🖋️ vi 에디터 단축키

| 모드 | 명령어 | 설명 |
|------|--------|------|
| 명령모드 | `i` | 입력 모드 진입 |
| 명령모드 | `:wq` | 저장하고 종료 |
| 명령모드 | `:q!` | 저장하지 않고 종료 |
| 명령모드 | `dd` | 현재 줄 삭제 |
| 명령모드 | `yy` | 현재 줄 복사 |
| 명령모드 | `p` | 붙여넣기 |
| 명령모드 | `/문자열` | 문자열 검색 |
| 명령모드 | `:%s/old/new/g` | 전체 치환 |

---

## 📜 Bash 스크립트 핵심 구문

```bash
#!/bin/bash

# 변수 선언
name="세현"

# if 조건문
if [ "$name" == "세현" ]; then
  echo "안녕, $name!"
fi

# for 반복문
for i in 1 2 3; do
  echo "반복: $i"
done

# while 반복문
count=1
while [ $count -le 3 ]; do
  echo "Count: $count"
  ((count++))
done
