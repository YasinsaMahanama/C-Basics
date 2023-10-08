#include<stdio.h>
#define P_Level1 1500
#define P_Level2 950
#define P_Level3 600
#define P_Level4 250
void main()
{
    int level,gross_index;
    char job_number[10];
    float net_pay,gross_pay,basic_salary,house_rent_allowance,income_tax,perks;

    printf("Enter level\t:\n");
    scanf("%d",&level);
    printf("Enter job number\t:\n");
    scanf("%s",job_number);
    printf("Enter basic salary\t:\n");
    scanf("%f",&basic_salary);

    switch(level)
    {
     case 1:
        perks = P_Level1;
        break;
     case 2:
        perks = P_Level2;
        break;
     case 3:
        perks = P_Level3;
        break;
     case 4:
        perks = P_Level4;
        break;
    default :
        printf("invalid level\n");
        exit(1);
    }

    house_rent_allowance = basic_salary*0.25;
    gross_pay = basic_salary + house_rent_allowance + perks;
    gross_index = gross_pay/1000;
    switch(gross_index)
    {
    case 0:case 1:
        income_tax = gross_pay*0.00;
        break;
    case 2:case 3:
        income_tax = gross_pay*0.03;
        break;
    case 4:case 5:
        income_tax = gross_pay*0.05;
        break;
    default :
        income_tax = gross_pay*0.08;
        break;
    }
   net_pay = gross_pay - income_tax;
   printf("net pay = %.2f\n",net_pay);

}


