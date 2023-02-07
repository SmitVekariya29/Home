#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
	clrscr();
	for(a=1; a<=5; a++)
	{
		for(b=1; b<=5; b++)
		{
			c=c+1;
			printf("%d\t",c);
		}
		printf("\n");
	}
	getch();
}