#include<stdio.h>
#include<conio.h>
int main()
{
	char chr;
	
	printf("Enter a character : ");
	scanf("%c", &chr);
	
	chr > 98 && chr < 123 ? printf("Lower case alphabet."):printf("Not a lower case alphabet.");
	
	getch();
	return 0;
}