#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int x, y, degree;
    float r, phi, p;

    printf("Enter the co-ordinate points (x, y): ");
    scanf("%d %d", &x, &y);

    
    r = sqrt(x*x + y*y);

    
    phi = atan(y/x);

    printf("The polar co-ordinates of (%d,%d) is (%f, %f)",x, y, r, phi);


    p = 3.141592;
    degree = phi * (180/p);
    printf("\nThe polar co-ordinates in Degree: (%f, %d)", r, degree);


    return 0;
}