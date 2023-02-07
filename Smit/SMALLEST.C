#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b;
	clrscr();
	printf("Enter Number = ");
	scanf("%f %f",&a,&b);

	if(b>a)
		printf("Smallest number is %.1f",a);
	else
		printf("Smallest number is %.1f",b);
	getch();
}
