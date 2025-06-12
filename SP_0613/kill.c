#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("사용법: %s <PID>\n", argv[0]);
        return 1;
    }

    int pid = atoi(argv[1]);
    if (kill(pid, SIGTERM) == 0) {
        printf("프로세스 %d 종료 요청됨\n", pid);
    } else {
        perror("프로세스 종료 실패");
    }

    return 0;
}