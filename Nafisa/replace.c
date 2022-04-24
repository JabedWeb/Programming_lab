/* Name : Nafisa Lubaba Khan Raisa
ID : 213902082
*/

#include<stdio.h>
#include<ctype.h>

int main()
{
	int newChar;
	char spChar;
	int ctr=0;
	char strinG[100]; 
	printf(" Replace the spaces of a string with a specific character :\n");

    printf(" Input a string : ");
	fgets(strinG, sizeof strinG, stdin); 
    printf(" Input replace character : ");
	scanf("%c",&spChar);
	printf(" After replacing  %c the new string is :\n",spChar);
	while (strinG[ctr])
	{
		newChar=strinG[ctr];
		if (isspace(newChar)) 
		newChar=spChar;
		putchar (newChar);
		ctr++;
	}
	printf("\n\n");
	return 0;
}