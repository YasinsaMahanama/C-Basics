#include <stdio.h>
void main ()
{
    int a,b,c,d;
    float Ratio;
    printf("Enter value of a,b,c,d:\n");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("c = ");
    scanf("%d",&c);
    printf("d = ");
    scanf("%d",&d);
    if((c-d)!=0){
     Ratio = (a+b)/(float)(c-d);
     printf("\nRatio = %f",Ratio);
    }
    else
     printf("\ndivision by zero");
getch();
}
