#include <stdio.h>
void main()
{
    int unit;
    float amount=0;
    char cu_number[8];

    printf("Enter customer number\t:\n");
    scanf("%s",cu_number);
    printf("Enter unit\t:\n");
    scanf("%d",&unit);

    if(unit<=100){
        amount=unit*5.5;
        printf("amount = Rs%.2f\n",amount);
    }
    else {
        if(unit<=200){
             amount=(unit-100)*8.5 + (100*5.5);
             printf("amount = Rs%.2f\n",amount);
        }
         else {
             if(unit<=300){
                 amount=(unit-200)*14.5 + (100*8.5) + (100*5.5);
                 printf("amount = Rs%.2f\n",amount);
             }
              else {
                 if(unit<=400){
                    amount=(unit-300)*21.5 + (100*14.5) + (100*8.5) + (100*5.5);
                    printf("amount = Rs%.2f\n",amount);
                 }
                  else{
                    amount=(unit-400)*32.5 + (100*21.5) + (100*14.5) + (100*8.5) + (100*5.5);
                    printf("amount = Rs%.2f\n",amount);
                  }
             }
         }
    }
}


