#include<stdio.h>
int main()
{
    int a,b,c,d;
    for(a=1;a<=1000;a++)
    {
        d=a;
        while(d/10!=0)
        {
            b=d%10;
            c=c+b*b*b;
            d=d/10;
        }
        c=c+d*d*d;
        if(a==c)
        {
            printf("%d is a armstrong number\n",c);
        }
        c=0;
    }
    return 0;
}