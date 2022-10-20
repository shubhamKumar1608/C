#include<stdio.h>
int main()
{
    int a,b,c=2,d=1,e,f;
    printf("Enter two number ");
    scanf("%d%d",&a,&b);
    e=a;
    f=b;
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
    if(d==1)
    {
      printf("%d and %d are co-prime ",e,f);
    }
    else{
        printf("%d and %d are not co-prime",e,f);
    }
    return 0;
}