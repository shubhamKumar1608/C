#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);
    while(a/10!=0)
    {
        b=b*10+a%10;
        a=a/10;
    }
    b=b*10+a;
    printf("reverse number is %d",b);
    return 0;
}