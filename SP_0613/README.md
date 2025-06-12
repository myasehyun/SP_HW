# 필수 Linux 명령어 정리 및 구현 (중요도 & 사용 빈도 순)

### 1. `ls`  
> 디렉터리 내 파일 및 폴더 목록 출력  
- `-l`: 상세 정보 출력  
- `-a`: 숨김 파일 포함 모든 파일 출력  
- `-h`: 파일 크기 인간 친화적 단위로 표시

```bash
# my_ls.sh - 현재 디렉터리의 파일 및 폴더 목록 출력

for file in *; do
    echo "$file"
done
#!/bin/bash
```


---

### 2. `cd`  
> 디렉터리 변경  
- 상대경로, 절대경로 모두 가능 
- ex: cd /home/username  # 홈 디렉터리로 이동 

```bash
# my_cd.sh - 디렉터리 변경

if [ -d "$1" ]; then
    cd "$1" || exit
    pwd
else
    echo "디렉터리가 존재하지 않습니다: $1"
fi
#!/bin/bash
```


- ex: source my_cd.sh /path/to/dir

---

### 3. `pwd`  
> 현재 작업 중인 디렉터리 경로 출력  
- `-L`: 심볼릭 링크 경로 출력 (기본)  
- `-P`: 실제 경로 출력  

```bash
# my_pwd.sh - 현재 디렉터리 경로 출력

echo "$(pwd)"
#!/bin/bash
```



---

### 4. `cat`  
> 파일 내용 출력 및 연결  
- `-n`: 모든 줄 번호 출력  
- `-b`: 빈 줄 제외 줄 번호 출력  
- `-s`: 연속된 빈 줄 압축  
- ex: cat filename.txt

```bash
# my_cat.sh filename

file="$1"

if [[ -f "$file" ]]; then
    while IFS= read -r line; do
        echo "$line"
    done < "$file"
else
    echo "파일이 존재하지 않습니다: $file"
fi

#!/bin/bash
```


---

### 5. `grep`  
> 특정 문자열 검색  
- `-i`: 대소문자 구분 없음  
- `-r`: 하위 디렉터리 재귀 검색  

```bash
# my_grep.sh "검색어" filename

pattern="$1"
file="$2"

if [[ -f "$file" ]]; then
    while IFS= read -r line; do
        if [[ "$line" == *"$pattern"* ]]; then
            echo "$line"
        fi
    done < "$file"
else
    echo "파일이 존재하지 않습니다: $file"
fi

#!/bin/bash
```

---

### 6. `ps`  
> 현재 실행 중인 프로세스 상태 출력  
- `aux`: 상세한 모든 프로세스 정보 표시  
- ex: ps aux | grep firefox  # firefox 관련 프로세스 찾기

```bash
# my_ps.sh - 현재 사용자의 프로세스 출력

ps -u "$USER"
#!/bin/bash
```


---

### 7. `kill`  
> 프로세스 종료  
- `kill PID`: 프로세스 종료 시그널 기본 전송  
- `kill -9 PID`: 강제 종료  
- ex: kill -9 12345  # PID 12345 프로세스 강제 종료

```bash
# my_kill.sh PID

pid="$1"

if kill "$pid" 2>/dev/null; then
    echo "프로세스 $pid 종료 요청됨"
else
    echo "프로세스 종료 실패 또는 존재하지 않음"
fi
#!/bin/bash
```

---

### 8. `chmod`  
> 파일 및 디렉터리 권한 변경  
- 숫자 또는 문자 모드로 권한 설정 가능  
- ex: chmod +x script.sh  # 실행 권한 추가

```bash
# my_chmod.sh filename

file="$1"

if [[ -f "$file" ]]; then
    chmod +x "$file"
    echo "실행 권한이 추가되었습니다: $file"
else
    echo "파일이 존재하지 않습니다: $file"
fi

#!/bin/bash
```
---

### 9. `chown`  
> 파일 및 디렉터리 소유자 변경  

```bash
# my_chown.sh 사용자 파일

user="$1"
file="$2"

if [[ -f "$file" || -d "$file" ]]; then
    sudo chown "$user" "$file"
    echo "$file 의 소유자를 $user 로 변경"
else
    echo "파일 또는 디렉터리가 존재하지 않습니다: $file"
fi
#!/bin/bash
```


---

### 10. `mkdir`  
> 새 디렉터리 생성  
- `-p`: 상위 디렉터리도 같이 생성  
- ex: mkdir -p /tmp/mydir/subdir  # 상위 디렉터리도 함께 생성

```bash
# my_mkdir.sh 디렉터리

dir="$1"

if [[ -d "$dir" ]]; then
    echo "디렉터리가 이미 존재합니다: $dir"
else
    mkdir -p "$dir"
    echo "디렉터리 생성됨: $dir"
fi

#!/bin/bash
```

---

### 11. `rm`  
> 파일 및 디렉터리 삭제  
- `-r`: 디렉터리 및 하위 파일 재귀 삭제  
- `-f`: 강제 삭제 (물음 없이)  
- ex: rm -rf /tmp/mydir  # 디렉터리와 내용 모두 삭제

```bash
# my_rm.sh 경로

target="$1"

if [[ -d "$target" ]]; then
    rm -rf "$target"
    echo "디렉터리 삭제됨: $target"
elif [[ -f "$target" ]]; then
    rm -f "$target"
    echo "파일 삭제됨: $target"
else
    echo "존재하지 않는 파일 또는 디렉터리: $target"
fi

#!/bin/bash
```
---

### 12. `cp`  
> 파일 및 디렉터리 복사  
- `-r`: 디렉터리 복사  
- `-i`: 덮어쓰기 시 확인  

```bash
# my_cp.sh source target

src="$1"
dst="$2"

if [[ -d "$src" ]]; then
    cp -r "$src" "$dst"
    echo "디렉터리 복사됨: $src → $dst"
elif [[ -f "$src" ]]; then
    cp "$src" "$dst"
    echo "파일 복사됨: $src → $dst"
else
    echo "소스가 존재하지 않습니다: $src"
fi

#!/bin/bash
```

---

### 13. `mv`  
> 파일 및 디렉터리 이동 및 이름 변경  

```bash
# my_mv.sh source target

src="$1"
dst="$2"

if [[ -e "$src" ]]; then
    mv "$src" "$dst"
    echo "이동 또는 이름 변경됨: $src → $dst"
else
    echo "소스가 존재하지 않습니다: $src"
fi

#!/bin/bash
```

---

### 14. `top`  
> 실시간 시스템 프로세스 및 자원 사용량 모니터링  

```bash
# my_top.sh - 상위 CPU 사용 프로세스 출력

echo "실시간 프로세스 (상위 5개)"
ps -eo pid,comm,%cpu,%mem --sort=-%cpu | head -n 6

#!/bin/bash
```

---

### 15. `df`  
> 파일 시스템 디스크 사용량 확인  
- `-h`: 인간 친화적 단위로 출력  

```bash
# my_df.sh - 파일 시스템 디스크 사용량

df -h

#!/bin/bash
```

---

### 16. `du`  
> 디렉터리 또는 파일의 디스크 사용량 확인  
- `-h`: 읽기 쉬운 단위로 출력  
- `-s`: 총합만 출력  
- ex: du -sh /var/log

```bash
# my_du.sh path

target="$1"

if [[ -e "$target" ]]; then
    du -sh "$target"
else
    echo "대상이 존재하지 않습니다: $target"
fi
#!/bin/bash
```


---

### 17. `tar`  
> 파일 묶기 및 압축 해제  
- `-c`: 아카이브 생성  
- `-x`: 아카이브 풀기  
- `-v`: 처리 과정 출력  
- `-f`: 아카이브 파일 지정  

```bash
# my_tar.sh c|x archive.tar [files...]

mode="$1"
archive="$2"

if [[ "$mode" == "c" ]]; then
    shift 2
    tar -cvf "$archive" "$@"
    echo "압축됨 → $archive"
elif [[ "$mode" == "x" ]]; then
    tar -xvf "$archive"
    echo "압축 해제됨 ← $archive"
else
    echo "사용법: ./my_tar.sh c|x archive.tar [files...]"
fi

#!/bin/bash
```

---

### 18. `ssh`  
> 원격 서버 접속  

```bash
# my_ssh.sh user@host

target="$1"
echo "SSH 접속 시도: $target"
ssh "$target"

#!/bin/bash
```

---

### 19. `wget` / `curl`  
> 파일 다운로드 및 HTTP 요청  
- ex: wget http://example.com/file.zip

```bash
# my_wget.sh URL

url="$1"
filename=$(basename "$url")

curl -o "$filename" "$url" && echo "다운로드 완료: $filename"

#!/bin/bash
```

---

### 20. `man`  
> 명령어 매뉴얼 페이지 조회  

```bash
# my_man.sh command

cmd="$1"

if command -v "$cmd" &> /dev/null; then
    "$cmd" --help 2>&1 | less
else
    echo "명령어를 찾을 수 없습니다: $cmd"
fi

#!/bin/bash
```

---
### 22. head  
> 파일 앞부분 출력  
- `-n`

```bash
# my_head.sh filename [줄수]

file="$1"
lines="${2:-10}"

if [[ -f "$file" ]]; then
    head -n "$lines" "$file"
else
    echo "파일이 존재하지 않습니다: $file"
fi

#!/bin/bash
```

### 23. tail  
> 파일 뒷부분 출력  
- `-n`, `-f` (실시간 모니터링)

```bash
# my_tail.sh filename [줄수]

file="$1"
lines="${2:-10}"

if [[ -f "$file" ]]; then
    tail -n "$lines" "$file"
else
    echo "파일이 존재하지 않습니다: $file"
fi
#!/bin/bash
```


### 24. touch  
> 파일 생성/수정 시간 변경
- ex: touch newfile.txt

```bash
# my_touch.sh filename

file="$1"

if [[ -e "$file" ]]; then
    touch "$file"
    echo "수정 시간 갱신됨: $file"
else
    touch "$file"
    echo "파일 생성됨: $file"
fi

#!/bin/bash
```

### 25. env  
> 환경 변수 출력 및 설정

```bash
# my_env.sh - 모든 환경 변수 출력

printenv
#!/bin/bash
```


### 26. export  
> 환경 변수 설정
- ex: export PATH=$PATH:/my/custom/path

```bash
# my_export.sh VAR VALUE

export "$1"="$2"
echo "$1 변수 설정됨: ${!1}"

#!/bin/bash
```

### 27. alias  
> 명령어 단축어 설정

```bash
# my_alias.sh name command

name="$1"
shift
cmd="$*"

echo "alias $name='$cmd'"
#!/bin/bash
```


### 28. unalias  
> alias 해제

```bash
# my_unalias.sh name

name="$1"
echo "unalias $name"

#!/bin/bash
```

### 29. history  
> 명령어 실행 기록 출력

```bash
# my_history.sh

history
#!/bin/bash
```


### 30. clear  
> 터미널 화면 지우기

```bash
# my_clear.sh

clear
#!/bin/bash
```


### 31. whoami  
> 현재 사용자 확인

```bash
# my_whoami.sh

echo "$USER"
#!/bin/bash
```


### 32. hostname  
> 호스트 이름 출력

```bash
# my_hostname.sh

hostname

#!/bin/bash
```


### 33. ping  
> 네트워크 연결 확인
- ex: ping -c 4 google.com

```bash
# my_ping.sh host

host="$1"
ping -c 4 "$host"
#!/bin/bash
```


### 34. netstat  
> 네트워크 상태 확인

```bash
# my_netstat.sh

ss -tuln
#!/bin/bash
```


### 35. ifconfig  
> 네트워크 인터페이스 설정 및 조회

```bash
# my_ifconfig.sh

ip address show
#!/bin/bash
```

### 36. traceroute  
> 경로 추적

```bash
# my_traceroute.sh host

host="$1"
traceroute "$host"

#!/bin/bash
```

### 37. ssh-keygen  
> SSH 키 생성
- ex: ssh-keygen -t rsa -b 4096

```bash
# my_sshkeygen.sh

ssh-keygen -t rsa -b 4096

#!/bin/bash
```

### 38. passwd  
> 사용자 비밀번호 변경

```bash
# my_passwd.sh

echo "비밀번호를 변경하려면 관리자 권한이 필요합니다"
sudo passwd

#!/bin/bash
```

### 39. df  
> 파일 시스템 디스크 용량 확인
- ex: stat filename.txt

```bash
# my_df.sh

df -h

#!/bin/bash
```

### 40. stat  
> 파일 상태 확인

```bash
# my_stat.sh filename

file="$1"

if [[ -e "$file" ]]; then
    stat "$file"
else
    echo "파일이 존재하지 않습니다: $file"
fi
#!/bin/bash
```


### 41. file  
> 파일 유형 확인
- ex: diff file1.txt file2.txt

```bash
# my_file.sh filename

file="$1"

if [[ -e "$file" ]]; then
    file "$file"
else
    echo "파일이 존재하지 않습니다: $file"
fi
#!/bin/bash
```


### 42. diff  
> 파일 차이점 비교

```bash
# my_diff.sh file1 file2

f1="$1"
f2="$2"

if [[ -f "$f1" && -f "$f2" ]]; then
    diff "$f1" "$f2"
else
    echo "두 파일 중 하나 이상이 존재하지 않습니다."
fi
#!/bin/bash
```


### 43. sort  
> 파일 내용 정렬
- ex: sort file.txt | uniq

```bash
# my_sort.sh filename

file="$1"

if [[ -f "$file" ]]; then
    sort "$file"
else
    echo "파일이 존재하지 않습니다: $file"
fi
#!/bin/bash
```


### 44. uniq  
> 중복 제거

```bash
# my_uniq.sh filename

file="$1"

if [[ -f "$file" ]]; then
    sort "$file" | uniq
else
    echo "파일이 존재하지 않습니다: $file"
fi
#!/bin/bash
```


### 45. chmod  
> 권한 변경

```bash
# my_chmod.sh filename

file="$1"

if [[ -f "$file" ]]; then
    chmod +x "$file"
    echo "실행 권한 추가됨: $file"
else
    echo "파일이 존재하지 않습니다: $file"
fi

#!/bin/bash
```

### 46. sed  
> 텍스트 편집 및 치환
- ex: find . -name "*.log" | xargs rm

```bash
# my_sed.sh search replace filename

search="$1"
replace="$2"
file="$3"

if [[ -f "$file" ]]; then
    sed "s/$search/$replace/g" "$file"
else
    echo "파일이 존재하지 않습니다: $file"
fi
#!/bin/bash
```


### 47. awk  
> 텍스트 처리 및 데이터 추출

```bash
# my_awk.sh filename

file="$1"

if [[ -f "$file" ]]; then
    awk '{print $1}' "$file"
else
    echo "파일이 존재하지 않습니다: $file"
fi

#!/bin/bash
```

### 48. xargs  
> 명령어 인자 처리

```bash
# my_xargs.sh

echo "file1.txt file2.txt" | xargs rm -f

#!/bin/bash
```

### 49. nohup  
> 프로세스 종료 후에도 계속 실행
- ex: sleep 5

```bash
# my_nohup.sh command

cmd="$@"

nohup $cmd > output.log 2>&1 &
echo "nohup으로 백그라운드 실행됨: $cmd"

#!/bin/bash
```
# my_sleep.sh

sleep 5
echo "5초 후 실행 완료"
```bash
#!/bin/bash
```



### 50. jobs  
> 백그라운드 작업 목록 확인

```bash
# my_jobs.sh

jobs

#!/bin/bash
```
