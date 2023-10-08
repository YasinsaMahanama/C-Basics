#include<stdio.h>
void main()
{
    int feet,inches;
    float centimeters;
    printf("The lengh in feet and inches:\n");
    scanf("%d%d",&feet,&inches);
    centimeters=(inches+feet*12)*2.54;
    printf("The length in centimeters:%0.2f\n",centimeters);
getch();
}
