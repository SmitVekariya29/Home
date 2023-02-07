#include<stdio.h>
#include<conio.h>
void main()
{
	int maths=71,che=71,eng=69,total;
	float per;
	clrscr();
	printf("Maths marks     = %d",maths);
	printf("\nChemistry marks = %d",che);
	printf("\nEnglish marks   = %d",eng);
	total=maths+che+eng;
	printf("\nTotal marks     = %d",total);
	per= (float) total/3;
	printf("\nPercentages     = %.2f",per);
	getch();
}