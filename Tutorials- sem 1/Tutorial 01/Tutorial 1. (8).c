#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
  int X1=2,X2=5,Y1=2,Y2=6;
  float D,R,A,PI=3.14;

  D = sqrt(((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1)));
  R = D/2;
  A = PI*R*R;
  printf("Area = %0.2f\n",A);
getch();
}
