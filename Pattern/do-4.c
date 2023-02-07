#include<stdio.h>
void main()
{
	int a=65,b;
	
	do
	{
		b=1;
		do
		{
			printf("%c ",a);
			b++;
		}while(b<=5);
		printf("\n");
		a++;
	}while(a<='E');
}