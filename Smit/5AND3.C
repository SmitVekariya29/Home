#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter Value = ");
	scanf("%d",&a);

	if(a%15==0)
		printf("%d is Divisible by 5 and 3",a);
	else
		printf("%d is not Divisible by 5 and 3",a);
	getch();
}
