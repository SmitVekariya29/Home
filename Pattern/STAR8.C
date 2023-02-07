#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,s=30;
	clrscr();

	for(a=1; a<=5; a++)
	{
		for(b=1; b<=s; b++)
		printf(" ");

		for(b=1; b<=5; b++)
		{
			if(a==1 || a==5 || b==1 || b==5)
			printf("* ");

			else
			printf("  ");
		}
		printf("\n");
	}
	getch();
}