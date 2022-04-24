/* Name : Nafisa Lubaba Khan Raisa
ID : 213902082
*/

#include<stdio.h>
#include<stdlib.h>

// pre remainder to compilar or pre declaration function
void displayResult(float firstNum,float SecondN, char opt, float result);
void Add(float firstNum,float SecondN);
void subtruction(float firstNum,float SecondN);
void multiplication(float firstNum,float SecondN);
void division(float firstNum,float SecondN);
void remainder(float firstNum,float SecondN);
// main function here called function

int main()
{
    float firstNum,SecondN;
    int opt;
    do
    {
        printf("\n**********Arithmatic Menu based Calcularator*******\n");
        printf("enter two number: ");
        scanf("%f %f",&firstNum,&SecondN);
        printf("enter your choice: \n");
        printf("1.addition\n");
        printf("2.subtruction\n");
        printf("3.multiplication\n");
        printf("4.division\n");
        printf("5.remainder\n");
        printf("6.exit\n");
        printf("enter your choice\n");
        scanf("%d",&opt);

// using swtich case to call function multiple times
        switch(opt)
        {
        case 1:
            addition(firstNum,SecondN);
            break;
        case 2:
            subtruction(firstNum,SecondN);
            break;
        case 3:
            multiplication(firstNum,SecondN);
            break;
        case 4:
            division(firstNum,SecondN);
            break;
        case 5:
            remainder(firstNum,SecondN);
            break;
        case 6:
            printf("thank you\n");
            exit(0);
        default:
            printf("please enter valid choice\n");

        }

    }
    while(1);
return 0;
}



// function to add two number
void addition(float firstNum,float SecondN)
{
    float result = firstNum+SecondN;
    displayResult(firstNum,SecondN,'+',result);

}
// function to substruction two number
void subtruction(float firstNum,float SecondN)
{
    float result = firstNum-SecondN;
    displayResult(firstNum,SecondN,'-',result);

}
// function multiplication two number
void multiplication(float firstNum,float SecondN)
{
    float result = firstNum*SecondN;
    displayResult(firstNum,SecondN,'*',result);

}
// function division two number
void division(float firstNum,float SecondN)
{
    float result = firstNum/SecondN;
    displayResult(firstNum,SecondN,'/',result);

}
// function modulus two number
void remainder(float firstNum,float SecondN)
{
    int n1 = firstNum;
    int n2 = SecondN;
    int result = n1%n2;
    printf("remainder is : %d",result);
}
// function to print result
void displayResult(float firstNum,float SecondN, char opt, float result)
{
    printf("\n\nanswer is : %.2f %c %.2f = %.2f\n",firstNum,opt,SecondN,result);
}
