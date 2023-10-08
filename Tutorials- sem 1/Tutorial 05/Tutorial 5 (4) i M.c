void main()
{
    //using if
    char stno[12];
    int mark;
    printf("\nEnter student number\t:");
    scanf("%s",stno);
    printf("\nEnter average mark\t:");
    scanf("%d",&mark);
    if(mark>100 || mark<0)
       printf("\nInvalid Mark!!!");
    else
       if(mark>=80)
           printf("\n%s - Grade is Honours!",stno);
       else
           if(mark>=60)
               printf("\n%s - Grade is First Division!",stno);
           else
               if (mark>=50)
                   printf("\n%s - Grade is Second Division!",stno);
               else
                   if(mark>=40)
                       printf("\n%s - Grade is Third Division!",stno);
                   else
                       printf("\n%s - Sorry you Fail!",stno);
}
