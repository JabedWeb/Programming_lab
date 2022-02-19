#include <stdio.h>

int main()
{
    float ban,eng,phy,che,prog;

    printf("please enter the five subjects mark ");
    scanf("%f %f %f %f %f",&ban,&eng,&phy,&che,&prog);
    
    //total mark;
    float total;
    total=ban+eng+phy+che+prog;
    float average;
    average=total/5;
    printf("total marks are %.2f",total);
    printf("average mark is %.2f",average);
    return 0;
}