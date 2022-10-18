#include<stdio.h>
int main()
{
    int a,b=1;
    printf("Enter a number");
    scanf("%d",&a);
    while(a/10!=0)
    {
        a=a/10;
        b++;
    }
    printf("total digit %d",b);
    return 0;
}