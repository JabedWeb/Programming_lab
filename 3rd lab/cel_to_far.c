#include <stdio.h>

int main()

{
    float clecius,farenheit;
    
    printf("enter celsius value: ");
    scanf("%f",&clecius);

    farenheit=(clecius*9/5)+32;
    printf("\nfarenheit is %.2f",farenheit);
    printf("F");
    return 0;
}