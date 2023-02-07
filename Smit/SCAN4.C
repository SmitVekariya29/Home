#include<stdio.h>
#include<conio.h>
void main()
{
	float C=2.54,I,a;
	clrscr();
	printf("Enter Inches = ");
	scanf("%f",&I);
	a=C*I;
	printf("Centimeter   = %.2f",a);
	getch();
}