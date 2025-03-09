#include <stdio.h>

int main() {
    unsigned int num;
    int count_ones = 0;

    // 0~255 사이 숫자 입력 받기
    printf("0부터 255 사이의 숫자를 입력하세요: ");
    scanf("%u", &num);

    if (num > 255) {
        printf("범위를 벗어났습니다. 0~255 사이 숫자를 입력해주세요.\n");
        return 1;
    }

    printf("입력한 숫자 %u의 2진수 표현: ", num);

    // 8비트 2진수 출력
    for (int i = 7; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
        if (bit == 1) count_ones++;
    }

    printf("\n");

    // 1의 개수 출력
    printf("1의 개수: %d\n", count_ones);

    // 상위 4비트 출력
    unsigned int upper4 = (num >> 4) & 0x0F;  // 상위 4비트만 추출
    printf("상위 4비트: ");
    for (int i = 3; i >= 0; i--) {
        printf("%d", (upper4 >> i) & 1);
    }
    printf("\n");

    return 0;
}
