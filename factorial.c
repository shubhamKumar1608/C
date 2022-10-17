#include<stdio.h>
int main()
{
    int a,b,c=1;
    printf("Enter number for factorial ");
    scanf("%d",&b);
    for(a=1;a<=b;a++)
    {
        c=c*a;
    }
    printf("factorial is %d",c);
    return 0;

}