#include<stdio.h>
void main()
{
    float F,C;
    char text[80];
    printf("The temperature in celsius:\n");
    scanf("%f",&C);
    F = 1.8*C+32;
    printf("The temperature in Fahrenheit:\n%0.2f",F);
getch();
}
