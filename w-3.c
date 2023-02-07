#include<stdio.h>
void main()
{
	int a=1,n;
	printf("Enter: ");
	scanf("%d",&n);
	
	while(a<=n)
	{
		printf("%d ",a);
		a+=2;
	}
}
