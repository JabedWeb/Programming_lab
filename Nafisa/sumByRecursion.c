/* Name : Nafisa Lubaba Khan Raisa
ID : 213902082
*/




#include <stdio.h>
// function declaration
int sumOfDigits(int num);


int main()
{
    int num;
    printf("Enter any number to find sum of digits: ");
    scanf("%d",&num);
    // function calling with printf the summation
    printf("Sum of digits of %d is = %d", num,sumOfDigits(num));
    return 0;
}



// Recursive function to find sum of digits
int sumOfDigits(int num)
{
    // Base condition
    if(num == 0)
        return 0;

    return ((num % 10) + sumOfDigits(num / 10));
}
