#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("사용법: %s <검색어> <파일>\n", argv[0]);
        return 1;
    }

    char *pattern = argv[1];
    FILE *fp = fopen(argv[2], "r");

    if (!fp) {
        perror("파일 열기 실패");
        return 1;
    }

    char line[1024];
    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, pattern)) {
            printf("%s", line);
        }
    }

    fclose(fp);
    return 0;
}