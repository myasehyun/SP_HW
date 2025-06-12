#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pwd.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("사용법: %s <사용자> <파일>\n", argv[0]);
        return 1;
    }

    struct passwd *pw = getpwnam(argv[1]);
    if (!pw) {
        printf("사용자 찾기 실패: %s\n", argv[1]);
        return 1;
    }

    if (chown(argv[2], pw->pw_uid, -1) == 0) {
        printf("%s 의 소유자를 %s 로 변경\n", argv[2], argv[1]);
    } else {
        perror("chown 실패");
    }

    return 0;
}