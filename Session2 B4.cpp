#include <stdio.h>

int main() {
    // Khai bao va khoi tao bien canh hinh vuong	
    int side = 5; // Bien so nguyen luu chieu dai canh hinh vuong gan gia tri 5

    // Tinh chu vi va dien tich
    int perimeter = 4 * side; // Chu vi  hinh vuong = canh * 4
    int area = side * side;   // Dien tich hinh vuong = canh * canh

    // In ket qua ra man hinh
    printf("Canh hinh vuong: %d\n", side);
    printf("Chu vi hinh vuong: %d\n", perimeter);
    printf("Dien tich hinh vuong: %d\n", area);

    return 0;
}

