
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("Enter coeffients of quadratic equation");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b-4*a*c);
    if(d<0)
    {
        printf("roots are imaginary");
    }
    else
    { 
        if(d==0)
        {
        printf("roots are same");
        printf("%d",-b/(2*a));
        }
        else
        {
            printf("roots are\n");
            printf("%f",(-b+sqrt(d))/(2*a));
            printf("%f",(-b-sqrt(d))/(2*a));
        }
    }
    return 0;
}