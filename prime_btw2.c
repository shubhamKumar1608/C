#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the two number ");
    scanf("%d%d",&a,&b);
    for(a;a<=b;a++)
    {
        for(c=2;c<a;c++)
        {
            if(a%c==0)
            {
                d++;
            }
        }
        if(d==0)
        {
            printf("%d is prime",a);
        }
        d=0;
    }
    return 0;
}