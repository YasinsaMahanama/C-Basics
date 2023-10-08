#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    int X1,X2,Y1,Y2;
    float D;
    printf("The value of the,\n");
    printf("X1 = ");
    scanf("%d",&X1);
    printf("X2 = ");
    scanf("%d",&X2);
    printf("Y1 = ");
    scanf("%d",&Y1);
    printf("Y2 = ");
    scanf("%d",&Y2);
    D=sqrt(((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1)));
    printf("Distance between two point=%f",D);
getch();
}
