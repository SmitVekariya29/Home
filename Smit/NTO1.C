#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n;
	clrscr();
	printf("Enter Number:");
	scanf("%d",&n);

	for(a=n; a>=1; a--)
	{
		printf("%d \t",a);
	}
	 getch();
}