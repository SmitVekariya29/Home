#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,A;
	clrscr();
	printf("Enter value of A = ");
	scanf("%f",&a);

	printf("Enter value of B = ");
	scanf("%f",&b);

	A=a;
	a=b;
	b=A;
	printf("\nSwappe value of A = %.2f",a);
	printf("\nSwappe value of B = %.2f",b);
	getch();
}