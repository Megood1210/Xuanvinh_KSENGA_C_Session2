#include <stdio.h>

#define PI 3.14  // Khai bao hang so kieu float

int main() {
    float r, chu_vi, dien_tich;
    
    // Nhap ba kinh tu nguoi dung
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);
    
    // Tinh chu vi va dien tich
    chu_vi = 2 * PI * r;
    dien_tich = PI * r * r;
    
    // In ket qua
    printf("Chu vi hinh tron la: %.2f\n", chu_vi);
    printf("Dien tich hinh tron la: %.2f\n", dien_tich);
    
    return 0;
}

