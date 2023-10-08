#include <stdio.h>
void main()
{
    float bonus,CusAccBalance;
    char Cusname[20],gender;

    printf("\nEnter the Cusname\t: \nEnter customer gender(F/M)\t: \nEnter CusAccBalance\t:\n"); In that case we can't understand clearly
    scanf("%s\n%c%f",Cusname,&gender,&CusAccBalance);

    bonus = CusAccBalance*0.02;
        CusAccBalance += bonus;

    if(CusAccBalance>5000 && gender=='F'|| gender=='f'){
      bonus = CusAccBalance*0.05;
      CusAccBalance += bonus;
   }
   printf("\nThe customer account balance:%.2f",CusAccBalance);
}
