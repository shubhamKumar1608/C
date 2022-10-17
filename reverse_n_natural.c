#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a no. upto which you want reverse number");
    scanf("%d",&a);
    for(b=0;a>b;a--)
    {
        printf("%d\n",a);
    }
    return 0;
}