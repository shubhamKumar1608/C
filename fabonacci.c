#include<stdio.h>
int main()
{
    int a,b=0,c;
    printf("Enter a number");
    scanf("%d",&a);
    while(b<a)
    {
        c=c+b;
        printf("%d",c);
        b++;
    }
    printf("Fabonacci sereis upto %d",a);
    return 0;
}