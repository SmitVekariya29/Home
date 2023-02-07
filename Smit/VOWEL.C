#include<stdio.h>
#include<conio.h>
void main()
{
	char q;
	clrscr();
	printf("Enter Alphabets:");
	scanf("%c",&q);

	if(q=='a'|| q=='e'|| q=='i'|| q=='o'|| q=='u'||
	   q=='A'|| q=='E'|| q=='I'|| q=='O'|| q=='U')
	{
		printf("Vowel");
	}
	else
	{
		printf("Consonant");
	}
	getch();
}