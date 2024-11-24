#include <stdio.h>

int main() {
    int thang;

    printf("Nhập vào số tháng (1-12): ");
    scanf("%d", &thang);

    if (thang < 1 || thang > 12) {
        printf("Số tháng không hợp lệ.\n");
    } else {
        switch (thang) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                printf("Tháng %d có 31 ngày.\n", thang);
                break;
            case 4: case 6: case 9: case 11:
                printf("Tháng %d có 30 ngày.\n", thang);
                break;
            case 2:
                printf("Tháng %d có 28 hoặc 29 ngày (năm nhuận).\n", thang);
                break;
        }
    }

    return 0;
}