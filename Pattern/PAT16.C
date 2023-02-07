#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	for(a=65; a<='E'; a++)
	{
		for(b=65; b<=a; b++)
		{
			printf("%c ",b);
		}
		printf("\n");
	}
	getch();
}