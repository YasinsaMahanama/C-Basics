#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c,S;
    float A;
    printf("The sides values of the triangle:\n");
    printf("a=");
    scanf("%d",&a);
    printf("\nb=");
    scanf("%d",&b);
    printf("\nc=");
    scanf("%d",&c);
    S = (a+b+c)/2;
    A = sqrt(S*(S-a)*(S-b)*(S-c));
    printf("\nThe area of the triangle:%0.2f\n",A);
getch();
}
