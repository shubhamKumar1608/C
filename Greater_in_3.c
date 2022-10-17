#include<stdio.h>
int main()
{
    int d,c,s;
    printf("Enter 3 number");
    scanf("%d%d%d",&d,&c,&s);
    printf("%d %d %d are the 3 numbers\n",d,c,s);
    if(d>c)
    {
        if(d>s)
        {
            printf("%d is greatest",d);
        }
        else
            printf("%d is greatest",s);
    }
    else
    {
        if(c>s)
        {
            printf("%d is greatest",c);
        }
        else
            printf("%d is greatest",s);
    }
        return 0;
     }
   
