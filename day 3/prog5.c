#include <stdio.h>

int main()
{
    int n, bin[50], i = 0;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary = ");

    for(i = i - 1; i >= 0; i--)
        printf("%d", bin[i]);

    return 0;
}