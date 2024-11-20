#include <stdio.h>

int main() {
    // Khai bao va khoi tao bien chieu dai va chieu rong	
    int length = 8; // Chieu dai cua hcn, gan gia tri 8
    int width = 4;  // Chieu rong cua hcn, gan gia tri 4

    // Tinh chu vi va dien tich 
    int perimeter = 2 * (length + width); // Chu vi = 2 * (chieu dai + chieu rong)
    int area = length * width;           // Dien tích = chieu dai * chieu rong

    // In ket qua ra man hinh
    printf("Chieu dai: %d\n", length);
    printf("Chieu rong: %d\n", width);
    printf("Chu vi hinh chu nhat: %d\n", perimeter);
    printf("Dien tich hinh chu nhat: %d\n", area);

    return 0;
}

