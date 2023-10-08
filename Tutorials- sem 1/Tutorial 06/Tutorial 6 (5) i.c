#include <stdio.h>
void main ()
{
    int x,y;

    printf("Enter value of x,y:\n\n");
    scanf("%d%d",&x,&y);
    if (x > 10 )
        if (y > 10)
            printf("line 1 \n");
        else
            printf("line 2 \n");
    printf("line 3 \n");
}
