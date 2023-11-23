
#include <stdio.h>

int  decimalToBinary(int decimal) {
    int binary = 0, remainder, base = 1;

    while (decimal > 0) {
        remainder = decimal % 2;
        binary = binary + remainder * base;
        decimal = decimal / 2;
        base = base * 10;
    }

    printf("The Binary value is: %d\n", binary);
}

int main() {
    int decimal;

    printf("Enter decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);

    return 0;
}