#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number upto which number you want reverse even");
    scanf("%d",&b);
    if(b%2==1)
    {
        b-=1;
    }
    for(a=0;b>=a;b-=2)
    {
        printf("%d\n",b);
    }
    return 0;
}