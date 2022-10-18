#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        if(a%b==0)
        {
            c++;
        }
          
    }
    if(c>2)
    {
        printf("%d is not prime",a);
    }
    else
    {
        printf("%d is prime",a);
    }
    return 0;
}