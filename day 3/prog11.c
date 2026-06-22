#include <stdio.h>

int sumDigit(int n)
{
    if(n == 0)
        return 0;

    return (n % 10) + sumDigit(n / 10);
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Sum = %d", sumDigit(n));

    return 0;
}