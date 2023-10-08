#include<stdio.h>
void main()
{
    int hours,minutes,seconds,flight_time;

    printf("Enter the blast of time of a rocket expressed in,\n");
    printf("hours:\n");
    scanf("%d",&hours);
    printf("minutes:\n");
    scanf("%d",&minutes);
    printf("seconds:\n");
    scanf("%d",&seconds);
    printf("Enter the flight time in seconds:\n");
    scanf("%d",&flight_time);
    seconds=seconds+flight_time;
    minutes=minutes+(seconds/60);
    seconds=seconds%60;
    hours=hours+(minutes/60);
    minutes=minutes%60;
    hours=hours%24;
    printf("The time in a readable format,\nhours :\nminutes \nseconds\n",hours,minutes,seconds);

}
