#include <stdio.h>

int main()
{
    int a[100], n, i, j;
    int count, max=0, element;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        count=1;

        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }

        if(count>max)
        {
            max=count;
            element=a[i];
        }
    }

    printf("Maximum Frequency Element = %d",element);

    return 0;
}