#include<stdio.h>

void main()
{
    int n,count;
    float x,y;

    printf("Enter the value of x:\n");
    scanf("%f",&x);
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    if(n=0)
      y = x^n;
      printf("x^n = 1",y);
    else
      if(n>1)
        y = 1.0;
        count=1;
	    while(count<=n){
		   y=y*x;
		   count++;
	    }
	    printf("x ^ n = %.3f\n",y);
}

