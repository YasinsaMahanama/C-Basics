#include <stdio.h>
void main ()
{
    int a,b,c,d;
    float Ratio;
    printf("Enter value of a,b,c,d:\n\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    Ratio = (a+b)/(float)(c-d);                   we definidly write (float)before(c-d)
    if((c-d)!=0){
     printf("\nRatio = %f",Ratio);
    }
    else
     printf("\ndivision by zero");
getch();
}
                                                   WRONG THIS - BECAUSE WE CAN'T WRITE " Ratio = (a+b)/(c-d) " ABOVE IF STATEMENT
