#include<stdio.h>

int main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d", &n);

	if(n%2)
		printf("%d is odd",n);
	else
		printf("%d is even",n);
	return 0;
}


