#include <stdio.h>

int main()
{
    int bin, rem, base = 1, dec = 0;

    printf("Enter binary number: ");
    scanf("%d", &bin);

    while(bin > 0)
    {
        rem = bin % 10;
        dec = dec + rem * base;
        base = base * 2;
        bin = bin / 10;
    }

    printf("Decimal = %d", dec);

    return 0;
}