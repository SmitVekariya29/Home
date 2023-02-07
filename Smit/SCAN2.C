#include<stdio.h>
#include<conio.h>
void main()
{

	float a,D=82.43,R;
	clrscr();
	printf("Enter Dollar Amount = ");
	scanf("%f",&R);
	a=D*R;
	printf("Amount in Rupees = %.2f",a);
	getch();
}