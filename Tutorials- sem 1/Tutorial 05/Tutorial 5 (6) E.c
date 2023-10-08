
#include<stdio.h>
#define P_Level1 1500
#define P_Level2 950
#define P_Level3 600
#define P_Level4 250
void main()
{
    int level;
    char job_number[10];
    float net_pay,gross_pay,basic_salary,house_rent_allowance;

    printf("Enter level\t:\n");
    scanf("%d",&level);
    printf("Enter job number\t:\n");
    scanf("%s",job_number);
    printf("Enter basic salary\t:\n");
    scanf("%f",&basic_salary);

    house_rent_allowance = basic_salary*0.25;

    if(level==1)
        gross_pay = basic_salary + house_rent_allowance + P_Level1;
    if(level==2)
        gross_pay = basic_salary + house_rent_allowance + P_Level2;
    if(level==3)
        gross_pay = basic_salary + house_rent_allowance + P_Level3;
    if(level==4)
        gross_pay = basic_salary + house_rent_allowance + P_Level4;


    if(gross_pay<2000)
        net_pay = gross_pay - gross_pay*0.00;
    if(gross_pay<4000)
        net_pay = gross_pay - gross_pay*0.03;
    if(gross_pay<6000)
        net_pay = gross_pay - gross_pay*0.05;
    if(gross_pay>=6000)
        net_pay = gross_pay - gross_pay*0.08;

 printf("net pay = %.2f\n",net_pay);
}
