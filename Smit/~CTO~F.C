#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,a1=25.29,a2=29.29;
	clrscr();
	a=(a1*9)/5+32;
	b=(a2*9)/5+32;
	printf("25.29 ~C= %.2f ~F",a);
	printf("\n29.29 ~C= %.2f ~F",b);
	getch();
}

//to convert ~C into ~F [(~c*9)/5+32]