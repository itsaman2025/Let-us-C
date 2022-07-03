#include<stdio.h>
#include<conio.h>
int main()
{
    int x, y, z, max;

    printf("Enter 1st Number: ");
    scanf("%d", &x);
    printf("Enter 2nd Number: ");
    scanf("%d", &y);
    printf("Enter 3rd Number: ");
    scanf("%d", &z);


     
    max = x;

    max = (max<y ? y : max);
    max = (max<z ? z : max);

    printf("Greatest Number is %d", max);

}