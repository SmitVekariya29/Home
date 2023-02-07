#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter number: ");
	scanf("%d",&b);

	for(a=1; a<=b; a++)
	{
		if(a%2==0)
		{
			printf("%d \t",a*a);
		}
		else
		{
			printf("%d \t",a);
		}
	}
	getch();
}