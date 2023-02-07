#include<stdio.h>
#include<conio.h>
void main()
{
	float a;
	clrscr();
	printf("Enter Your Age: ");
	scanf("%f",&a);

	if(a>=18)
	{
		printf("\nYou are eligible for Voting.");
	}
	else
	{
		printf("\nYou are not eligible for Voting.");
	}
	getch();
}