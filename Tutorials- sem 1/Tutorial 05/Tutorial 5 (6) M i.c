#define CA1 1000
#define CA2 750
#define CA3 500
#define CA4 250
#define EA1 500
#define EA2 200
#define EA3 100
#define EA4 0
void main(){//using if
 int level, jobnumber;
 float gross, basic, house_rent, perks,net,incometax;
 printf("\nEnter level, job number, and basic pay : ");
 scanf("%d %d %f",&level,&jobnumber,&basic);
 if(level ==1)
   perks = CA1 + EA1;
 else if(level ==2)
         perks = CA2 + EA2;
      else if(level ==3)
              perks = CA3 + EA3;
           else if(level ==4)
                   perks = CA4 + EA4;
                else{
                   printf("\nInvalid Level");
                   exit(1);
                }
 house_rent = 0.25 * basic;
 gross = basic + house_rent + perks;
 if(gross<2000)
    incometax = 0;
 else if(gross<4000)
         incometax = gross * 0.03;
      else if (gross<6000)
              incometax = gross * 0.05;
           else
              incometax = gross * 0.08;
 net = gross - incometax;
 printf("\nJob number : %d, level : %d, Net pay : %.2f\n",jobnumber,level,net);

}
