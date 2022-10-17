#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Table of %d\n",a);
    for(b=1;b<=10;b++)
    {
        printf("%d\n",a*b);
    }
    return 0;
}