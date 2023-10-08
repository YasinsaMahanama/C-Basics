void main(){
 int a,b,c,max;
 printf("\nEnter 3 numbers to find max:\t");
 scanf("%d %d %d",&a,&b,&c);
 max = (a>b)?((a>c)?a:c):((b>c)?b:c);
 printf("\nMax = %d",max);
}

