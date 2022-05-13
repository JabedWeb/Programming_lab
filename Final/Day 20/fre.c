#include<stdio.h>
int main()
{
    int i,rem,num;
    scanf("%d",&num);
    int freq[10]= {0};
    while(num)
    {
        rem = num % 10;
        for(i=0; i<10; i++)
        {
            if(rem==i)
                freq[i]++;
        }
        num = num /10;

    }
    for(i=0; i<10; i++)
        printf("frequency of %d is %d\n",i,freq[i]);
}
