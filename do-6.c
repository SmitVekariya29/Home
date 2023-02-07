#include<stdio.h>
void main()
{
	int a=1,b,s=0;
	
	printf("Enter value: ");
	scanf("%d",&b);
	
	do
	{
		s+=a;
		printf("%d ",a);
		a+=2;
	}while(a<=b);
	printf("\nTotal: %d",s);
}