#include<stdio.h>
void main()
{
	int a,n;
	printf("Enter:");
	scanf("%d",&n);
	
	a=-n;
	do
	{
		printf("%d ",a);
		a++;
	}while(a<=n);
}