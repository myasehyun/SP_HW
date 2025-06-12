#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("사용법: %s <파일>\n", argv[0]);
        return 1;
    }

    if (chmod(argv[1], 0755) == 0) {
        printf("실행 권한 추가됨: %s\n", argv[1]);
    } else {
        perror("chmod 실패");
    }

    return 0;
}