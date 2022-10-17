#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Emter a number");
    scanf("%d",&a);
    
    for(b=1;b<=a;b+=2)
    {
        c=c+b;
    }
    printf("sum of odd natural number upto %d is %d",a,c);
    return 0;
}