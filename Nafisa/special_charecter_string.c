/* Name : Nafisa Lubaba Khan Raisa
ID : 213902082
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define strinG_size 100 

void main()
{
    char str[strinG_size];
    int alphab, digit, specialCharacter, i;
    alphab = digit = specialCharacter = i = 0;

    printf("Input the string : ");
    fgets(str, sizeof str, stdin);	


    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphab++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            specialCharacter++;
        }

        i++;
    }

    printf("Number of alphabethabets %d\n", alphab);
    printf("Number of Digits  %d\n", digit);
    printf("Number of Special characters  %d", specialCharacter);

}