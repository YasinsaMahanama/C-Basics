#include<stdio.h>
void main(){
	int count,n;
	float x,y;
	printf("enter the value of X and N \n");
	scanf("%f%d",&x,&n);
	y=1.0;
	count=1;
	while(count<=n){
		y=y*x;
		count++;
	}
	printf("\nX = %.3f, N = %d, X ^ N = %.3f",x,n,y);
}
