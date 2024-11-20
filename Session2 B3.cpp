#include <stdio.h>

int main() {
    
    int num1 = 25; 
    int num2 = 15; 
	int sum = num1 + num2;  
	printf("Tong cua %d va %d la: %d\n", num1, num2, sum);
    int sum1 = num1 - num2;
    printf("Hieu cua %d va %d la: %d\n", num1, num2, sum1);
    int sum2 = num1 * num2;
    printf("Tich cua %d va %d la: %d\n", num1, num2, sum2);
    int sum3 = num1 / num2;
    printf("Thuong cua %d va %d la: %d\n", num1, num2, sum3);
    
    return 0;
}

