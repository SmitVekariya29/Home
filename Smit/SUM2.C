#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter Number: ");
	scanf("%d",&b);

	for(a=1; a<=b; a*=2)
	{
		printf("%d  ",a);
	}
	getch();
}