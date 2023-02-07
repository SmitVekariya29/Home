#include<stdio.h>
#include<conio.h>
void main()
{
	int maths,che,eng,total;
	float per;
	clrscr();
	printf("Enter Maths marks     = ");
	scanf("%d",&maths);

	printf("Enter Chemistry marks = ");
	scanf("%d",&che);

	printf("Enter English marks   = ");
	scanf("%d",&eng);

	total=maths+che+eng;
	printf("Total marks = %d",total);

	per=total/3;
	printf("\nPercentages = %.2f",per);
	getch();
}
