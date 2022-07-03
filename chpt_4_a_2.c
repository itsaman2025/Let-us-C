#include<stdio.h>
#include<conio.h>

int main()
{
	char chr;
	
	printf("Enter a character : ");
	scanf("%c", &chr);
	
	chr < 123 && chr > 97 || chr > 64 && chr < 92 ? printf("Not a special symbol."):printf("Special symbol.");
	
	getch();
	return 0;
}@