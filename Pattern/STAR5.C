#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,s=30;
	clrscr();
	for(a=5; a>=1; a--)
	{
		for(b=1; b<=s; b++)
		printf(" ");

		for(b=1; b<=a; b++)
		{
			printf("* ");
		}
		s++;
		printf("\n");
	}
	getch();
}