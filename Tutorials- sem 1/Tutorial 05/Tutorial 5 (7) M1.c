void main()
{
//using conditional operator
 int x,y;
 printf("\nEnter value x to find y=f(x): ");
 scanf("%d",&x);
 y = (x<0)?1:((x==0)?0:-1);
 printf("\n x = %d , y = f(x) = %d",x,y);
}
