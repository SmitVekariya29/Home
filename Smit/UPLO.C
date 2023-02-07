#include<stdio.h>
#include<conio.h>
void main()
{
	char s;
	clrscr();

	printf("Enter Alphabets: ");
	scanf("%c",&s);

	if(s>='a' && s<='z')
	{       s=s-32;
		printf("Upper case: %c",s);
	}
	else if(s>='A' && s<='Z')
	{       s=s+32;
		printf("Lower case: %c",s);
	}
	getch();
}