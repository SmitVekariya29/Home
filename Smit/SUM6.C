#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=1;
	clrscr();

	for(a=1; a<=10; a++)
	{
		printf("%d \t",a*b);
		b*=2;
	}
	getch();
}