#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,d,u;   //u=units
	clrscr();
	printf("Enter Used Units: ");
	scanf("%f",&u);

	if(u<=100)
	{
		a=(u*0.6)+50;
		printf("Total Bill: %.2f",a);
	}
	else if(u>100 && u<=300)
	{
		b=((u-100)*0.8)+50+60;
		printf("Total Bill: %.2f",b);
	}
	else
	{
		c=((u-300)*0.9)+50+60+160;
		printf("Total Bill: %.2f",c);
	}

	if(c>300)
	{
		d=((c*15/100)+c);
		printf("\nBill with Surcharges: %.2f",d);
	}

	getch();
}
