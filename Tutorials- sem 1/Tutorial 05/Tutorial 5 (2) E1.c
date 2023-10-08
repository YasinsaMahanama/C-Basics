
#include <stdio.h>
void main()
{
    int x,y,z,largest;
    printf("Enter values of 3 numbers:\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
        if(x>z)
           printf("\nlargest=x",largest);
         else
           printf("\nlargest=z",largest);
    else
        if(y>z)
            printf("\nlargest=y",largest);
        else
            printf("\nlargest=z",largest);
getch();
}
