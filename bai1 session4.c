#include <stdio.h>
int main(){
    int SoNguyen;
    printf("moi ban nhap mot so nguyen\n");
    scanf("%d",&SoNguyen);

    if( SoNguyen > 0){
        printf("Ban vua nhap vao so duong %d",SoNguyen);
    }else {
        printf("Ban vua nhap vao so am %d",SoNguyen);
    }
    return 0;
}