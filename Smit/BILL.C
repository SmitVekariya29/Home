#include<stdio.h>
#include<conio.h>
void main()
{
	float rate,qnt,amt,dis,billamt,gst,netbill;
	clrscr();
	printf("Enter Rate     = ");
	scanf("%f",&rate);

	printf("Enter Quantity = ");
	scanf("%f",&qnt);

	amt=rate*qnt;
	dis=amt*5/100;
	billamt=amt-dis;
	gst=rate+(18*rate)/100;
	netbill=billamt+gst;

	printf("Amount         = %.2f",amt);
	printf("\nDiscount(5)    = %.2f",dis);
	printf("\nBill Amount    = %.2f",billamt);
	printf("\nGST(18)        = %.2f",gst);
	printf("\nNetbill        = %.2f",netbill);
	getch();
}
