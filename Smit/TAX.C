#include<stdio.h>
#include<conio.h>
void main()
{
	float i,a,b,c,n;
	clrscr();
	printf("Enter Income: ");
	scanf("%f",&i);

	if(i<=2500)
	{
		printf("Applied Tax: 00.00 Rs.");
	}
	else if(i>2500 && i<=5000)
	{
		a=((i-2500)*10/100);
		printf("Applied Tax : %.2f Rs.",a);
	}
	else if(i>5000 && i<=10000)
	{
		b=((i-5000)*20/100)+250;
		printf("Applied Tax : %.2f Rs.",b);
	}
	else
	{
		c=((i-10000)*30/100)+250+1000;
		printf("Applied Tax : %.2f Rs.",c);
	}
	getch();
}