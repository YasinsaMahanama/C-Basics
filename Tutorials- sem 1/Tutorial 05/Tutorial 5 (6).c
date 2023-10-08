#include<stdio.h>
#define P_Level1 1500
#define P_Level2 950
#define P_Level3 600
#define P_Level4 250
void main()
{
    int level;
    char job_number[10];
    float net_pay,gross_pay,basic_salary,house_rent_allowance,income_tax,perks;

    printf("Enter level\t:\n");
    scanf("%d",&level);
    printf("Enter job number\t:\n");
    scanf("%s",job_number);
    printf("Enter basic salary\t:\n");
    scanf("%f",&basic_salary);

    if(level==1)
        perks = P_Level1;
    if(level==2)
        perks = P_Level2;
    if(level==3)
        perks = P_Level3;
    if(level==4)
        perks = P_Level4;

    house_rent_allowance = basic_salary*0.25;
    gross_pay = basic_salary + house_rent_allowance + perks;

    if(gross_pay<2000)
        income_tax = gross_pay*0.00;
    if(gross_pay<4000)
        income_tax = gross_pay*0.03;
    if(gross_pay<6000)
        income_tax = gross_pay*0.05;
    if(gross_pay>=6000)
        income_tax = gross_pay*0.08;

 net_pay = gross_pay - income_tax;
 printf("net pay = %.2f\n",net_pay);
}
