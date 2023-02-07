#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
	clrscr();
	printf("Enter number: ");
	scanf("%d",&b);

	for(a=2; a<=b; a=a+2)
	{       c+=a;
		printf("%d \t",a);
	}

	printf("\nTotal: %d",c);

	getch();
}