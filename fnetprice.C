#include<stdio.h>
#include<conio.h>
void price();
void main()
{
	clrscr();
	printf("find price using UDF\n");
	price();
	getch();
}
void price()
{
     char nm[10];
	int uprice,qaunt,price;
	float disc,nprice;
printf("enter item name\n");
scanf("%s",&nm);
printf("enter unit price\n");
scanf("%d",&urice);
printf("enter qauntity\n");
scanf("%d",&qaunt);
price=uprice*qaunt;
printf("price=%d\n",price);
disc=price-*0.5;
printf("total discount is=%f\n");
nprice=price-disc;
printf("net price is=%f\n");
]