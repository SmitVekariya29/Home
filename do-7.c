#include<stdio.h>
void main()
{
	int a=1,b;
	printf("Enter value: ");
	scanf("%d",&b);
	
	do
	{
		printf("%d ",a*a);
		a++;
	}while(a<=b);
}