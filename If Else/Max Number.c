#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,Max;
    printf("Enter the values of three numbers\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    if(a>b)
    {
        Max=a;
        printf("Max number=%d",Max);
    }
    else
        if(b>c)
        {
        Max=b;
        printf("Max number=%d",Max);
        }
        else
        {
           Max=c;
           printf("Max number=%d",Max);
        }
getch();
}
