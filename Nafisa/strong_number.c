/* Name : Nafisa Lubaba Khan Raisa
ID : 213902082
*/


#include <stdio.h>
//pre remainder to compilar
void strong(int start,int end);
int main()
{
    int end,start;

    printf("\n\nFind Strong Numbers within an interval of numbers:\n ");
    printf("**************************************************\n");
    printf("starting range of number : ");
    scanf("%d", &start);
    printf("endding range of number: ");
    scanf("%d", &end);
    printf("\n\nThe Strong numbers are :");
    // function calling
    strong(start,end);

}

void strong(int start,int end)
{
    int i,n1, s1=0,j,k;
    long fact;
    for(k=start; k<=end; k++)
    {
        n1=k;
        s1=0;

        for(j=k; j>0; j=j/10)
        {

            fact = 1;
            for(i=1; i<=j % 10; i++)
            {
                fact = fact * i;
            }
            s1 = s1 + fact;
        }

        if(s1==n1)

            printf("%d  ", n1);
    }
    printf("\n\n");
}
