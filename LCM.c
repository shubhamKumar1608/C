#include<stdio.h>
int main()
{
    int a,b,c=2,d=1;
    printf("Enter two number for LCM ");
    scanf("%d%d",&a,&b);
     while(c<=a||c<=b)
    {
        if(a%c==0||b%c==0)
        {
            d=d*c;
        }
        if(a%c==0)
       {
            a=a/c;
           }
        if(b%c==0)
        {
          b=b/c;
          }
        if(a%c==0||b%c==0)
        {
            c-=1;
        }
        c++;
     }
    printf("LCM of two number is %d ",d);
    return 0;
}