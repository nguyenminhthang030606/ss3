#include <stdio.h>

int main() {
    float base, height, area; // Khai bao bien cho day, chieu cao va dien tich

    // Yeu cau nguoi dung nhap canh dai (day) và chieu cao cua tam giac
    printf("Nhap chieu dai canh day ua tam giac: ");
    scanf("%f", &base);
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &height);

    // Tính dien tich tam giac
    area = (base * height) / 2;
    // Hien thi ket qua
    printf("Dien tich tam giac la: %.2f\n", area);

    return 0;
}

