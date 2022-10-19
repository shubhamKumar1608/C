#include<stdio.h>
int main()
{
    int a,b,c=2,d=1;
    printf("Enter two number ");
    scanf("%d%d",&a,&b);
   while(c<=a&&c<=b)
    {
        if(a%c==0&&b%c==0)
        {
            d=d*c;
            a=a/c;
            b=b/c;
            if(a%c==0&&b%c==0)
            {
                c-=1;
            }
        }
        c+=1;
    }
      printf("HCF of two number %d ",d);
    return 0;
}