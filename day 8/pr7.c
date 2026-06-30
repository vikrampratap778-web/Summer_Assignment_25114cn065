#include <stdio.h>

int main()
{
    int a[100], n, i;
    int first, last, mid, key;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter sorted elements:\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter number to search: ");
    scanf("%d",&key);

    first=0;
    last=n-1;

    while(first<=last)
    {
        mid=(first+last)/2;

        if(a[mid]==key)
        {
            printf("Element Found");
            return 0;
        }
        else if(key>a[mid])
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }

    printf("Element Not Found");

    return 0;
}