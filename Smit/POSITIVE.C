#include<stdio.h>
#include<conio.h>
void main()
{
	float a;
	clrscr();
	printf("Enter Number = ");
	scanf("%f",&a);

	if(a>0)
		printf("%.2f is Positive",a);
	else
		printf("%.2f is Negative",a);

	getch();

}