struct date
{
    int year;
    int month;
    int day;
};

struct employee
{
    char name[30];
    float salary;
    struct date jdate;
};

void main()
{
    struct employee employee1[2];
    int i;

    for(i=0;i<2;i++)
    {
        printf("Enter the details of employee\n\n");
        printf("employee name:");
        scanf("%s",employee1[i].name);
        printf("employee salary:");
        scanf("%f",&employee1[i].salary);
        printf("employee joindate:");
        scanf("%2d:%2d:%d",&employee1[i].jdate.day,&employee1[i].jdate.month,&employee1[i].jdate.year);
    }
    for(i=0;i<2;i++)
    {
        if(employee1[i].salary<=10000)
            employee1[i].salary*=1.15;
        else
            if(employee1[i].salary<=30000)
                employee1[i].salary*=1.1;
    }
            for(i=0;i<2;i++)
            {
                printf("employee name:%s\temployee salary:%.2f\n",employee1[i].name,employee1[i].salary);
            }

}
