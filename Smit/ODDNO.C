#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n;
	clrscr();
	printf("Enter Number: ");
	scanf("%d",&n);

	for(a=1; a<=n; a+=2)
	{
		printf("%d \t",a);
	}
	getch();
}