#include<stdio.h>
#include<conio.h>
void main()
{                         //1 foot = 12 inch

	float I=12,a,b,c,a1=11.12,a2=25.29,a3=29.29;
	clrscr();
	a=a1*I;
	b=a2*I;
	c=a3*I;
	printf("11.12 Foot = %.2f Inches",a);
	printf("\n25.29 Foot = %.2f Inches",b);
	printf("\n29.29 Foot = %.2f Inches",c);
	getch();
}