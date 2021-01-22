#include <stdio.h>
#include <string.h>

void reverse_String(char [], int, int);

int main()
{
char Str[100], temp;
int i, j, len;
clrscr();
printf("\n Enterthe String :  ");
gets(Str);
len = strlen(Str);
reverse_String(Str, 0, len -1);
printf("\n reverse string = %s", Str);
getch();
}

void reverse_String(char Str[], int i, int len)
{
char temp;
temp = Str[i];
Str[i] = Str[len - i];
Str[len - i] = temp;

if (i == len/2)
{
return;
}
reverse_String(Str, i + 1, len);
return 0;
}