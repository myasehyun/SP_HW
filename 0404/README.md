# 🧠 생성형 AI 미션 - C 언어 비트 처리

## 💬 사용한 프롬프트

> 지피띠니야 0~255 사이의 수를 입력 받아 2진수로 출력하고, 1의 개수가 몇 개 인지 출력하고, 8비트 중에 상위 4비트를 출력하는 코드를 씨언어로 작성해줘

---

## 🧾 생성형 AI가 만들어준 코드

```c
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
