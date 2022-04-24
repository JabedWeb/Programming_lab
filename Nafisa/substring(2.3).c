/* Name : Nafisa Lubaba Khan Raisa
ID : 213902082
*/
#include <stdio.h>
void main() 
{
   char str[100], sub_stra[100];
   int pos_string, sub_length, c = 0;
   
    printf("\n\nExtract a substring from a given string:\n");
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);

   printf("Input start extraction :");
   scanf("%d", &pos_string);
   
   printf("Input the length of substring :");
   scanf("%d", &sub_length);
 
   while (c < sub_length) 
   {
      sub_stra[c] = str[pos_string+c-1];
      c++;
   }
   sub_stra[c] = '\0';
 
   printf("The substring  from the string is :  %s", sub_stra);
 }