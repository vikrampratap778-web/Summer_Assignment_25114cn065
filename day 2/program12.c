#include<stdio.h>

int main()
{
    int a,b,i,temp,digit,sum;

    printf("Enter range: ");
    scanf("%d%d",&a,&b);

    for(i=a;i<=b;i++)
    {
        temp=i;
        sum=0;

        while(temp!=0)
        {
            digit=temp%10;
            sum=sum+(digit*digit*digit);
            temp=temp/10;
        }

        if(sum==i)
            printf("%d ",i);
    }

    return 0;
}