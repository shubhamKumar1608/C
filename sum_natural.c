#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter a number for total sum upto that \n");
    scanf("%d",&b);
    for(a=0;a<=b;a++)
    {
        c=c+a;
    }
    printf("total sum %d",c);
    return 0;

}