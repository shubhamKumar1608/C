#include<stdio.h>
int main()
{
    int a,b=2,c;
    printf("Enter a number for which prime factor you want ");
    scanf("%d",&a);
    c=a;
    while(b<=a)
    {
        if(a%b==0)
        {
            printf("%d\n",b);
            a=a/b;
            b-=1;
        }
        b++;
    }
    printf("are the prime factor of given number %d ",c);
    return 0;
}