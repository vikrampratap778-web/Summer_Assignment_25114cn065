#include <stdio.h>

int main()
{
    int a[100], n, i;
    int sum=0, total;

    printf("Enter size (without missing number): ");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    total=(n+1)*(n+2)/2;

    printf("Missing Number = %d",total-sum);

    return 0;
}