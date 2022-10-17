#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);
    b=a%10;
    while(a/10!=0)
    {
        a=a/10;
        b=b+a%10;
    }
    printf("total sum %d",b);
    return 0;
}