#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	for(a=65; a<=90; a++)
	{
		printf("%c-%c \t",a,a+32);
	}
	getch();
}