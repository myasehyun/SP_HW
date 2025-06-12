#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("사용법: %s <디렉토리>\n", argv[0]);
        return 1;
    }

    if (chdir(argv[1]) == 0) {
        char cwd[1024];
        getcwd(cwd, sizeof(cwd));
        printf("현재 디렉토리: %s\n", cwd);
    } else {
        perror("디렉토리 이동 실패");
    }

    return 0;
}