void main()
{
    int x,y;
    printf("Enter value of x:");
    scanf("%d",&x);
    y=(x!=0)?((x<0)?(y=1):(y=-1)):(y=0);
    printf("y=%d",y);
}

