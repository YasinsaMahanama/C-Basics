#include <stdio.h>
void main()
{
    int mark;
    char stu_number[8];
    printf("Enter your student number\t:\n");
    scanf("%s",stu_number);
    printf("Enter your average mark\t:\n");
    scanf("%d",&mark);
    if(mark>=100 || mark<0)
        printf("%s-Invalid mark..!\n");
    else
        if(mark>=80)
           printf("%s-Grade is Honours..!\n");
        else
            if(mark>=60)
               printf("%s-Grade is First Division..!\n");
            else
                if(mark>=50)
                   printf("%s-Grade is Second Division..!\n");
                else
                   if(mark>=40)
                      printf("%s-Grade is Third Division..!\n");
                   else
                      printf("%s-Sorry you fail..!!\n");
}

