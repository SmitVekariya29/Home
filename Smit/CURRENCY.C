#include<stdio.h>
#include<conio.h>
void main()
{
	float D,i1=82.79,U,i2=101.91,P,i3=22.54;
	clrscr();
	printf("Enter USD =");
	scanf("%f",&D);

	printf("Enter UAE Dirham =");
	scanf("%f",&U);

	printf("Enter UK Pound =");
	scanf("%f",&P);

	printf("USD        = %.2f\ INR = %.2f",D,D*i1);
	printf("\nUAE Dirham = %.2f\t INR = %.2f",U,U*i2);
	printf("\nUK Pound   = %.2f\t INR = %.2f",P,P*i3);
	getch();
}