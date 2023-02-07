#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i=97;
	clrscr();
	for(a=1; a<=5; a++)
	{
		for(b=1; b<=a; b++)
		{
			if(b%2==1)
			printf("%c ",i);

			else
			printf("%c ",i-32);
			i++;
		}
		printf("\n");
	}
	getch();
}