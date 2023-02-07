#include<stdio.h>
void main()
{
	int a,b,s=15;
	for(a=1; a<=5; a++)
	{
		for(b=1; b<=s; b++)
		printf(" ");
			
		for(b=1; b<=a; b++)	
		{
			printf("* ");
		}
		s--;
		printf("\n");
		
	}
}