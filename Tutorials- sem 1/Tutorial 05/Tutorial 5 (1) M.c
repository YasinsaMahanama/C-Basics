void main() {
 int a,b,c,d;
 float answer;
 printf("Enter 4 numbers to find ratio: \n");
 scanf("%d %d %d %d",&a,&b,&c,&d);
 if((c-d)!=0){
 answer = (a+b)/(float)(c-d);
 printf("\nRatio = %f",answer);
 }
 else
 printf ("division by zero");
}
