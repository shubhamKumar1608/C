#include<stdio.h>
int main()
{
    int a,b,c,d=1;
    printf("Enter number and its power");
    scanf("%d %d",&a,&b);
    for(c=1;c<=b;c++)
    {
        d=d*a;
    }
    printf("sum is %d",d);
    return 0;
    
}