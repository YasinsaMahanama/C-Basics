#include <stdio.h>
void main()
{
    int x,y,z,largest;
    printf("Enter values of 3 numbers:\n\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
        if(x>z)
           largest=x;
        else
           largest=z;
    else
        if(y>z)
            largest=y;
        else
            largest=z;
    printf("\nlargest=%d",largest);
getch();
}

