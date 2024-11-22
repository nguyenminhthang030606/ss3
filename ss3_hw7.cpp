#include <stdio.h>

int main() {
    int number, sum = 0;

    // Yêu cau ngoui dung nhap mot so nguyên có 4 cu so 
    printf("Nhap mot so nguyên co bon chu so: ");
    scanf("%d", &number);


        // Tinh tong cac chu so 
        while (number > 0) {
            sum += number % 10;  // Lay chu so cuoi
            number /= 10;        // Loai bo chu so cuoi
        }

        // Hien thi ket qua 
        printf("Tong cac chu so la: %d\n", sum);
 

    return 0;
}

