#include <stdio.h>
#define PI 3.14159 // gia tri so PI
int main() {
    float radius, circumference, area;

    // Yeu cau nguoi dung nhap ban kinh
    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &radius);

    // Tinh chu vi va dien tich
    circumference = 2 * PI * radius; // Chu vi = 2 * p * r
    area = PI * radius * radius;     // Dien tich = p * r^2

    // Hien thi ket qua voi 2 so thap phân
    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f\n", area);

    return 0;
}
