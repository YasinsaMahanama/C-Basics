#include <stdio.h>
void main ()
{
    int x,y,z,largest;
    printf("enter 3 number of values:\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x> y && x > z)
        printf("largest = x\n");
    else
        if(y > x && y > z)
             printf("largest = y\n");
        else
             printf("largest = z\n");
    }
