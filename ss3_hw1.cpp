#include <stdio.h>

int main() {
    char name[50]; // tao mot bien luu ten nguoi nhap , toi da 49 ki tu  

    // nhap ten nguoi dung 
    printf("Nhap ten cua ban: ");
    // doc ten tu dau vao  
    scanf("%s", name);

    printf("Xin chao %s\n", name); // In ra loi chao kem ten nguoi dung 

    return 0;
}

