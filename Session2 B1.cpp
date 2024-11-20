#include <stdio.h>

int main() {
    // Kieu int: Dung de luu cac so nguyen (vd: -1, 0, 42)
    int myInt = 10; // Khoi tao bien nguyen myInt voi gia tri 10

    // Kieu float: Dung de luu cac so thuc (vd: 3.14, -0.01)
    float myFloat = 3.14; // Khoi tao bien so thuc myFloat voi gia tri 3.14

    // Kieu double: Dung de luu cac so thuc ( Chinh xac hon float )
    double myDouble = 2.718281828; // Khoi tao bien so thuc myDouble voi gia tri 2.718281828.

    // Kieu char: Dung de luu mot ki tu ASCII (vd: 'a', 'Z', '3')
    char myChar = 'A'; // Khoi tao bien ki tu myChar voi gia tri 'A'

    // Kieu _Bool ( hoac bool khi dung thu vien stdbool.h ): Dung de luu gia tri true(1) hoac false(0)
    bool myBool = 1; // Khoi tao bien logic myBool voi gia tri true

    // Kieu unsigned int: Dung de luu so nguyen khong am
    unsigned int myUnsignedInt = 50; // Khoi tao bien so nguyen khong am myUnsignedInt voi gia tri 50
    // Kieu long: Dung de luu so nguyen lon hon kieu Int
    long myLong = 1234567890; // Khoi tao bien so nguyen lon myLong voi gia tri 1234567890

    // Kieu Short: Dung de luu so nguyen nho hon kieu Int
    short myShort = -32768; // Khoi tao bien so nguyen nho myShort voi gia tri -32768

    // Kieu unsigned char: Dung de luu gia tri tu 0 den 255 ( chi gia tri duong )
    unsigned char myUnsignedChar = 200; // Khoi tao bien myUnsignedChar voi gia tri 200

    // In gia tri cac bien ra man hinh:
    printf("Integer: %d\n", myInt);
    printf("Float: %f\n", myFloat);
    printf("Double: %lf\n", myDouble);
    printf("Character: %c\n", myChar);
    printf("Boolean: %d\n", myBool);
    printf("Long: %ld\n", myLong);
    printf("Short: %hd\n", myShort);
    printf("Unsigned Char: %u\n", myUnsignedChar);
   

    return 0;
}

