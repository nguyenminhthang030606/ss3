#include <stdio.h>

int main() {
    float math, literature, english; // Bien luu diem Toan, Van, Anh
    float total, average;            // Bien luu tong diem và diem trung bình

    // Yêu cau nguoi dung nhap diem
    printf("Nhap diem Toan: ");
    scanf("%f", &math);
    printf("Nhap diem Van: ");
    scanf("%f", &literature);
    printf("Nhap diem Anh: ");
    scanf("%f", &english);

    // Tinh tong diem và diem trung binh
    total = math + literature + english;
    average = total / 3;

    // Hien thi ket qua
    printf("Tong diem: %.2f\n", total);
    printf("Ðiem trung binh: %.2f\n", average);

    return 0;
}

