#include<stdio.h>
#include<conio.h>
void main()
{
	float a;
	clrscr();
	printf("Enter Marks: ");
	scanf("%f",&a);

	if(a>33)
	{
		printf("Congratulations,You are Pass");
	}
	else
	{
		printf("Better Luck Next Time");
	}
	getch();
}