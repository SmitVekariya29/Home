#include<stdio.h>
#include<conio.h>
void main()
{              //1 inch = 2.54 c.m.
	float c=2.54,a,b,a1=25.29,a2=29.29;
	clrscr();
	a=a1*c;
	b=a2*c;
	printf("25.29 Inches = %.2f c.m.",a);
	printf("\n29.29 Inches = %.4f c.m.",b);
	getch();
}
