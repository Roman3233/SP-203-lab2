#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    a = a + b; //зберігаємо суму обох чисел
    b = a - b; //тепер b зберігає початкове значення a
    a = a - b; //тепер a зберігає початкове значення b
    
    printf("After swap: a = %d, b = %d\n", a, b);
    
    return 0;
}
