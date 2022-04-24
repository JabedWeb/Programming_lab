/* Name : Nafisa Lubaba Khan Raisa
ID : 213902082
*/


#include <stdio.h>
#include <string.h>

void main()
{
    int i, Count = 0;
    char strt[50];

    printf("Find the  Count_legth of a strting:\n ");

    printf("Type strting --- ");
    scanf("%s", strt);
 
    for (i = 0; strt[i] != '\0'; i++)
    {
        Count++;
    }
    printf("So, the Count_legth of that strt %s is : %d", strt, Count);
}
