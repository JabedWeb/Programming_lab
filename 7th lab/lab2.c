#include <stdio.h>
/** 
 * Function declarations for calculator
 */
int add(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
int div(int num1, int num2);



int main()
{
    char option;
    int num1, num2, result=0; 

    /* Print welcome message */
    printf("Enter [your first Number] then Select operation [+ - * /] and then [your second number]\n");

    /* Input two number and optionerator from user */
    scanf("%d %c %d", &num1, &option, &num2);

    switch(option)
    {
        case '+': 
            result = add(num1, num2);
            break;

        case '-': 
            result = sub(num1, num2);
            break;

        case '*': 
            result = mult(num1, num2);
            break;

        case '/': 
            result = div(num1, num2);
            break;

        default: 
            printf("Invalid optionerator");
    }

    /* Print the result */
    printf("%d %c %d = %d", num1, option, num2, result);

    return 0;
}


/**
 * Function to add two numbers
 */
int add(int num1, int num2)
{
    return num1 + num2;
}

/**
 * Function to subtract two numbers
 */
int sub(int num1, int num2)
{
    return num1 - num2;
}

/**
 * Function to multiply two numbers
 */
int mult(int num1, int num2)
{
    return num1 * num2;
}

/**
 * Function to divide two numbers
 */
int div(int num1, int num2)
{
    return num1 / num2;
}