#include<stdio.h>
#include<conio.h>
int star(int, int);
void main()
{
int r,c,pattren;
clrscr();
printf(" this is a star pattern using UDF");
star(r,c);
getch();
}
int star(int r,int c)
{
for(r=0;r<=5;r++)
{
for(c=0;c<=r;c++)
{
printf(" * ");
}
printf("\n");
}
for(r=0;r<=5;r++)
{
for(c=5;c>=r;c--)
{
printf(" * ");
}
printf("\n");
}
 return r,c;
}