void main(){

 float balance,bonus;
 char gender, cusName[25];
 printf("Enter your Name\t:\n");
 scanf("%s",cusName);
 printf("\nEnter your Gender (F/M)\t:");
 scanf("\n%c",&gender);
 printf("\nEnter your balance\t:");
 scanf("%f",&balance);

 bonus = balance * 0.02;

 if ((gender=='F' || gender=='f') && balance>5000){
   bonus += balance * 0.05;
 }
 balance = balance + bonus;
 printf("\nYour Balance is %.2f", balance);
}
