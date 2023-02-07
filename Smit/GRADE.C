#include<stdio.h>
#include<conio.h>
void main()
{
	float m;
	clrscr();
	printf("Enter Marks:");
	scanf("%f",&m);

	if(m>=75)
	{
		printf("Grade-A");
	}
	else if(m>=60 && m<75)
	{
		printf("Grade-B");
	}
	else if(m>=45 && m<60)
	{
		printf("Grade-C");
	}
	else if(m>=35 && m<45)
	{
		printf("Grade-D");
	}
	else
	{
		printf("Better Luck Next Time");
	}
	getch();
}