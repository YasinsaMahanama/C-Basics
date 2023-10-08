#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    int CX=0,CY=0,PX=4,PY=5;
    float R,C,A,PI=3.14;
    R = sqrt(((PX-CX)*(PX-CX))+((PY-CY)*(PY-CY)));
    C = 2*PI*R;
    A = PI*R*R;
    printf("The Perimeter is = %0.2f\n",C);
    printf("The area is = %0.2f",A);
getch();
}
