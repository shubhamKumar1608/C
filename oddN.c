#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number upto which number you want ");
    scanf("%d",&b);
    for(a=1;a<=b;a+=2)
    {
        printf("%d\n",a);
    }
    return 0;
}