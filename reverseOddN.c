#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number upto which number you want ");
    scanf("%d",&b);
    if(b%2==0)
    {
        b-=1;
    }
    for(a=0;a<=b;b-=2)
    {
        printf("%d\n",b);
    }
    return 0;
}