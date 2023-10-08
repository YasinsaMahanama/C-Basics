#include<stdio.h>
void main()
{
    int yard,feet,inches,length;
    printf("The length in inches:\n");
    scanf("%d",&length);
    yard=length/36;
    inches=length%36;
    feet=inches/12;
    inches=inches%12;
    printf("The length in,\nyard:%d\n",yard);
    printf("feet:%d\n",feet);
    printf("inches:%d\n",inches);
getch();
}
