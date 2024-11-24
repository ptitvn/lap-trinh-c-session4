#include <stdio.h>

int main() {
    int number;

    printf("Nhập vào một số nguyên: ");
    scanf("%d",&number);

    if (number % 2 == 0) {
        printf("%d là số chẵn.\n", number);
    } else {
        printf("%d là số lẻ.\n", number);
    }

    return 0;
}