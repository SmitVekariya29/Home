#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int a=1,b=0,c;
	clrscr();

       /*	printf("enter number:");
	scanf("%d",&n); */
	for(i=1; i<=20; i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d \t",c);

	}
	getch();
}