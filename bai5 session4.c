#include <stdio.h>

int main() {
    int so1, so2, so3;

    printf("Nhập vào 3 số nguyên: ");
    scanf("%d %d %d", &so1, &so2, &so3);

    // Sắp xếp 3 số theo thứ tự tăng dần (không bắt buộc, nhưng giúp cho việc so sánh dễ dàng hơn)
    if (so1 > so2) {
        int temp = so1;
        so1 = so2;
        so2 = temp;
    }
    if (so2 > so3) {
        int temp = so2;
        so2 = so3;
        so3 = temp;
    }
    if (so1 > so2) {
        int temp = so1;
        so1 = so2;
        so2 = temp;
    }

    if (so3 > so1 && so3 < so2) {
        printf("%d nằm trong khoảng giữa %d và %d.\n", so3, so1, so2);
    } else {
        printf("%d không nằm trong khoảng giữa %d và %d.\n", so3, so1, so2);
    }

    return 0;
}