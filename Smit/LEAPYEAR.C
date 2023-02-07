#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter Year: ");
	scanf("%d",&a);

	if(a%4==0)
		printf("%d is Leap year",a);
	else
		printf("%d is not Leap year",a);
	getch();
}