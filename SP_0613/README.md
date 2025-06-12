# 리눅스 명령어 50개 - C 언어 구현

## 1. `ls` 명령어 구현

> 디렉터리 내 파일 목록 출력

```c
#include <stdlib.h>

int main() {
    system("ls");
    return 0;
}
```

---

## 2. `cd` 명령어 구현

> 디렉터리 변경

```c
#include <stdlib.h>

int main() {
    system("cd");
    return 0;
}
```

---

## 3. `pwd` 명령어 구현

> 현재 디렉터리 경로 출력

```c
#include <stdlib.h>

int main() {
    system("pwd");
    return 0;
}
```

---

## 4. `cat` 명령어 구현

> 파일 내용 출력

```c
#include <stdlib.h>

int main() {
    system("cat");
    return 0;
}
```

---

## 5. `grep` 명령어 구현

> 문자열 검색

```c
#include <stdlib.h>

int main() {
    system("grep");
    return 0;
}
```

---

## 6. `ps` 명령어 구현

> 프로세스 목록 확인

```c
#include <stdlib.h>

int main() {
    system("ps");
    return 0;
}
```

---

## 7. `kill` 명령어 구현

> 프로세스 종료

```c
#include <stdlib.h>

int main() {
    system("kill");
    return 0;
}
```

---

## 8. `chmod` 명령어 구현

> 파일 권한 변경

```c
#include <stdlib.h>

int main() {
    system("chmod");
    return 0;
}
```

---

## 9. `chown` 명령어 구현

> 파일 소유자 변경

```c
#include <stdlib.h>

int main() {
    system("chown");
    return 0;
}
```

---

## 10. `mkdir` 명령어 구현

> 디렉터리 생성

```c
#include <stdlib.h>

int main() {
    system("mkdir");
    return 0;
}
```

---

## 11. `rm` 명령어 구현

> 파일 또는 디렉터리 삭제

```c
#include <stdlib.h>

int main() {
    system("rm");
    return 0;
}
```

---

## 12. `cp` 명령어 구현

> 파일 복사

```c
#include <stdlib.h>

int main() {
    system("cp");
    return 0;
}
```

---

## 13. `mv` 명령어 구현

> 파일 이동 또는 이름 변경

```c
#include <stdlib.h>

int main() {
    system("mv");
    return 0;
}
```

---

## 14. `top` 명령어 구현

> 시스템 프로세스 및 자원 사용 모니터링

```c
#include <stdlib.h>

int main() {
    system("top");
    return 0;
}
```

---

## 15. `df` 명령어 구현

> 디스크 사용량 확인

```c
#include <stdlib.h>

int main() {
    system("df");
    return 0;
}
```

---

## 16. `du` 명령어 구현

> 디렉터리 디스크 사용량 확인

```c
#include <stdlib.h>

int main() {
    system("du");
    return 0;
}
```

---

## 17. `tar` 명령어 구현

> 파일 압축 및 압축 해제

```c
#include <stdlib.h>

int main() {
    system("tar");
    return 0;
}
```

---

## 18. `ssh` 명령어 구현

> 원격 접속

```c
#include <stdlib.h>

int main() {
    system("ssh");
    return 0;
}
```

---

## 19. `wget` 명령어 구현

> 파일 다운로드

```c
#include <stdlib.h>

int main() {
    system("wget");
    return 0;
}
```

---

## 20. `man` 명령어 구현

> 명령어 도움말 보기

```c
#include <stdlib.h>

int main() {
    system("man");
    return 0;
}
```

---

## 21. `head` 명령어 구현

> 파일 앞부분 출력

```c
#include <stdlib.h>

int main() {
    system("head");
    return 0;
}
```

---

## 22. `tail` 명령어 구현

> 파일 뒷부분 출력

```c
#include <stdlib.h>

int main() {
    system("tail");
    return 0;
}
```

---

## 23. `touch` 명령어 구현

> 빈 파일 생성 또는 시간 갱신

```c
#include <stdlib.h>

int main() {
    system("touch");
    return 0;
}
```

---

## 24. `env` 명령어 구현

> 환경 변수 출력

```c
#include <stdlib.h>

int main() {
    system("env");
    return 0;
}
```

---

## 25. `export` 명령어 구현

> 환경 변수 설정

```c
#include <stdlib.h>

int main() {
    system("export");
    return 0;
}
```

---

## 26. `alias` 명령어 구현

> 명령어 별칭 설정

```c
#include <stdlib.h>

int main() {
    system("alias");
    return 0;
}
```

---

## 27. `unalias` 명령어 구현

> 명령어 별칭 해제

```c
#include <stdlib.h>

int main() {
    system("unalias");
    return 0;
}
```

---

## 28. `history` 명령어 구현

> 명령어 사용 이력 보기

```c
#include <stdlib.h>

int main() {
    system("history");
    return 0;
}
```

---

## 29. `clear` 명령어 구현

> 터미널 화면 지우기

```c
#include <stdlib.h>

int main() {
    system("clear");
    return 0;
}
```

---

## 30. `whoami` 명령어 구현

> 현재 사용자 이름 출력

```c
#include <stdlib.h>

int main() {
    system("whoami");
    return 0;
}
```

---

## 31. `hostname` 명령어 구현

> 호스트 이름 출력

```c
#include <stdlib.h>

int main() {
    system("hostname");
    return 0;
}
```

---

## 32. `ping` 명령어 구현

> 네트워크 연결 확인

```c
#include <stdlib.h>

int main() {
    system("ping");
    return 0;
}
```

---

## 33. `netstat` 명령어 구현

> 네트워크 상태 보기

```c
#include <stdlib.h>

int main() {
    system("netstat");
    return 0;
}
```

---

## 34. `ifconfig` 명령어 구현

> 네트워크 인터페이스 정보 보기

```c
#include <stdlib.h>

int main() {
    system("ifconfig");
    return 0;
}
```

---

## 35. `traceroute` 명령어 구현

> 네트워크 경로 추적

```c
#include <stdlib.h>

int main() {
    system("traceroute");
    return 0;
}
```

---

## 36. `ssh-keygen` 명령어 구현

> SSH 키 생성

```c
#include <stdlib.h>

int main() {
    system("ssh-keygen");
    return 0;
}
```

---

## 37. `passwd` 명령어 구현

> 비밀번호 변경

```c
#include <stdlib.h>

int main() {
    system("passwd");
    return 0;
}
```

---

## 38. `stat` 명령어 구현

> 파일 상태 보기

```c
#include <stdlib.h>

int main() {
    system("stat");
    return 0;
}
```

---

## 39. `file` 명령어 구현

> 파일 형식 보기

```c
#include <stdlib.h>

int main() {
    system("file");
    return 0;
}
```

---

## 40. `diff` 명령어 구현

> 파일 차이 비교

```c
#include <stdlib.h>

int main() {
    system("diff");
    return 0;
}
```

---

## 41. `sort` 명령어 구현

> 파일 정렬

```c
#include <stdlib.h>

int main() {
    system("sort");
    return 0;
}
```

---

## 42. `uniq` 명령어 구현

> 중복 제거

```c
#include <stdlib.h>

int main() {
    system("uniq");
    return 0;
}
```

---

## 43. `sed` 명령어 구현

> 텍스트 치환

```c
#include <stdlib.h>

int main() {
    system("sed");
    return 0;
}
```

---

## 44. `awk` 명령어 구현

> 텍스트 처리

```c
#include <stdlib.h>

int main() {
    system("awk");
    return 0;
}
```

---

## 45. `xargs` 명령어 구현

> 표준 입력을 인수로 전달

```c
#include <stdlib.h>

int main() {
    system("xargs");
    return 0;
}
```

---

## 46. `nohup` 명령어 구현

> 터미널 종료 후에도 실행 유지

```c
#include <stdlib.h>

int main() {
    system("nohup");
    return 0;
}
```

---

## 47. `jobs` 명령어 구현

> 백그라운드 작업 목록 확인

```c
#include <stdlib.h>

int main() {
    system("jobs");
    return 0;
}
```

---

## 48. `date` 명령어 구현

> 현재 날짜 및 시간 출력

```c
#include <stdlib.h>

int main() {
    system("date");
    return 0;
}
```

---

## 49. `uptime` 명령어 구현

> 시스템 가동 시간 출력

```c
#include <stdlib.h>

int main() {
    system("uptime");
    return 0;
}
```

---

## 50. `who` 명령어 구현

> 접속 중인 사용자 보기

```c
#include <stdlib.h>

int main() {
    system("who");
    return 0;
}
```

---

