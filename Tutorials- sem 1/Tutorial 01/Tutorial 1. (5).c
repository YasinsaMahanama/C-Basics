#include<stdio.h>
void main()
{
   int x,y,temp;
   printf("The value of the,\n");
   printf("x =");
   scanf("%d",&x);
   printf("\ny =");
   scanf("%d",&y);
   temp = x;
   x = y;
   y = temp;
   printf("\nx = %d y = %d",x,y);
getch();
}
