#include<stdio.h>
int main()
{
    int a,b,c=-1,d=1,e;
    printf("Enter a number");
    scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        e=c+d;
        printf("%d\n",e); 
        c=d;
        d=e;
    }
    printf("Fabonacci sereis upto %d",a);
    return 0;
}