(01)

01)

#include<stdio.h>
#include<conio.h>

void main()
{
    char x;

    printf("Enter the character of x:\n");
    scanf("%c",&x);
    printf("x : %c",x);
getch();
}


02)

#include<stdio.h>
#include<conio.h>

void main()
{
    int x=5,y=10;
    int sum;

    sum=x+y;

    printf("x = %d\ny = %d",x,y);
    printf("\n\nSum = %d",sum);

getch();
}


03)

#include<stdio.h>
#include<conio.h>

void main()
{
    char myArray[6] = "group";

    printf("The array is %s",myArray);

getch();
}


04)

#include<stdio.h>
#include<conio.h>

void main()
{
    char greetings[15] = "Good Morning";

    printf("The array : %s",greetings);

getch();
}


05)

#include<stdio.h>
#include<conio.h>

void main()
{
    char greetings[15] = "Good Morning";

    printf("The array : %s",greetings);

    printf("\n\nThe first character in the greetings string : %c",greetings[0]);

getch();
}


06)

#include<stdio.h>
#include<conio.h>

void main()
{

    float y = 23.6789;

    printf("The value of y : %.2f",y);

getch();
}


07)

#include<stdio.h>
#include<conio.h>

void main()
{

    printf("C\nis\na\ngeneral\npurpose\nprogramming\nlanguage");

getch();
}





(02)

#include<stdio.h>
#include<conio.h>

void main()
{

   int x,y,sum;

   printf("Enter the value :\n\tx : ");
   scanf("%d",&x);
   printf("\ty : ");
   scanf("%d",&y);

   sum = x+y;

   printf("\nSum = %d",sum);

getch();
}


(03)

#include<stdio.h>
#include<conio.h>

void main()
{

   int x,y,z;

   printf("Enter the value :\n\tx : ");
   scanf("%d",&x);
   printf("\ty : ");
   scanf("%d",&y);
   printf("\tz : ");
   scanf("%d",&z);

   if(x>y && x>z)
   {
       printf("The largest number = x");
   }
   else if(y>x && y>z)
   {
       printf("The largest number = y");
   }
   else
   {
       printf("The largest number = z");
   }

getch();
}


(04)

#include<stdio.h>
#include<conio.h>

void main()
{

   int i,j,x;

   printf("Enter the value of multiple number : ");
   scanf("%d",&i);

   printf("\n\nThe multiplication table of %d.....\n\n",i);
   for(j=0;j<12;j++)
       {
           x = i * j;
           printf("\t%d * %d = %d\n",i,j,x);
       }


getch();
}



(05)

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{

    char array[50];
    char max;
    int i,x;

    printf("\n\nEnter the array :\n\t");
    gets(array);

    printf("\n\nThe array : %s",array);

    max = array[0];

    for(i=0;i<sizeof(array);i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }

    printf("\n\nThe max element in the array : %c",max);

getch();
}


(06)

#include<stdio.h>
#include<conio.h>

void main()
{

    int x;

    printf("Enter the year : ");
    scanf("%d",&x);
    printf("\nThe year is %d.",x);

    if(x%4 != 0)
    {
        printf("\n\nThe year is not a leap year.");
    }
    else if(x%100 != 0)
    {
        printf("\n\nThe year is a leap year.");
    }
    else if(x%400 != 0)
    {
        printf("\n\nThe year is not a leap year.");
    }
    else
    {
        printf("\n\nThe year is a leap year.");
    }

getch();
}


(07)

#include<stdio.h>
#include<conio.h>

void main()
{

    int x,y,sum,sub,div,mul,mod;
    char z;

    printf("Enter the value :\n");
    printf("\tx = ");
    scanf("%d",&x);
    printf("\ty = ");
    scanf("%d",&y);

    if(z = '+')
    {
        sum = x + y;
        printf("\nSum = \t%d\n\n",sum);
    }
    if(z = '-')
    {
        sub = x - y;
        printf("Sub = \t%d\n\n",sub);
    }
    if(z = '*')
    {
        mul = x * y;
        printf("Multiplication = %d\n\n",mul);
    }
    if(z = '/')
    {
        div = x / y;
        printf("Deviation = \t%d\n\n",div);
    }
    if(z = '%')
    {
        mod = x % y;
        printf("Modulus = \t%d",mod);
    }

getch();
}


(08)

#include<stdio.h>
#include<conio.h>

void main()
{

    float weight,height;
    float BMI;
    int age;
    char gender;

    printf("Enter the value of weight : ");
    scanf("%f",&weight);
    printf("\n\nEnter the value of height : ");
    scanf("%f",&height);
    printf("\n\nEnter your age : ");
    scanf("%d",&age);
    printf("\n\nEnter your gender(m/f) : ");
    scanf("%c ",&gender);

    BMI = weight/(height * height);

    if(age > 20 && gender == 'm')
    {
        if(BMI < 18.5)
            printf("Underweight");
        else if(18.5 <= BMI < 25.0)
            printf("Normal");
        else if(25.0 <= BMI < 30.0)
            printf("Overweight");
        else if(30.0 <= BMI)
            printf("Obese");
    }
    else
    {
       printf("Sorry!");
    }


getch();
}
