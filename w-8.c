#include<stdio.h>
void main()
{
	int a=1,i=1;
	while(i<=10)
	{
		printf("%d ",i*a);
		a*=2;
		i++;
	}
}