#include<stdio.h>
#include<conio.h>
void main()
{
	float s,h,d;
	clrscr();
	printf("Enter Salary:");
	scanf("%f",&s);

	if(s<=5000)
	{
		h=s*8/100;
		d=s*12/100;
		printf("HRA: %.2f",h);
		printf("\nDA : %.2f",d);
	}
	else if(s>5000 && s<=10000)
	{
		h=s*12/100;
		d=s*30/100;
		printf("HRA: %.2f",h);
		printf("\nDA : %.2f",d);
	}
	else if(s>10000 && s<=15000)
	{
		h=s*15/100;
		d=s*40/100;
		printf("HRA: %.2f",h);
		printf("\nDA : %.2f",d);
	}
	else
	{
		h=s*20/100;
		d=s*50/100;
		printf("HRA: %.2f",h);
		printf("\nDA : %.2f",d);
	}
	getch();
}