#include <stdio.h>
void main()
{
    float bonus,CusAccBalance;
    char Cusname[20],gender;

    printf("Enter the Cusname\t:");
    scanf("%s",Cusname);
    printf("\nEnter customer gender(F/M)\t:");
    scanf("%s",&gender);
    printf("\nEnter CusAccBalance\t:");
    scanf("%f",&CusAccBalance);

    bonus = CusAccBalance*0.02;
        CusAccBalance += bonus;

    if(CusAccBalance>5000 && gender=='F'|| gender=='f'){
      bonus = CusAccBalance*0.05;
      CusAccBalance += bonus;
   }
   printf("\nThe customer account balance:%.2f",CusAccBalance);
}
