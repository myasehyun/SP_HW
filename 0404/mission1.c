#include <stdio.h>

void printBinary(int n) {
    printf("2진수(8비트): ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int countOnes(int n) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        if ((n >> i) & 1) count++;
    }
    return count;
}

void printUpper4Bits(int n) {
    printf("상위 4비트: ");
    for (int i = 7; i >= 4; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main() {
    int num;

    printf("0에서 255 사이의 정수를 입력하세요: ");
    scanf("%d", &num);

    if (num < 0 || num > 255) {
        printf("잘못된 입력입니다! 0~255 사이의 수만 입력 가능합니다.\n");
        return 1;
    }

    printf("입력한 수: %d\n", num);

    printBinary(num);

    int ones = countOnes(num);
    printf("1의 개수: %d\n", ones);

    printUpper4Bits(num);

    return 0;
}