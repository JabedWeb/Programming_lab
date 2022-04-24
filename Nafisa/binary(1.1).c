/* Name : Nafisa Lubaba Khan Raisa
ID : 213902082
*/

#include<stdio.h>    

void BinaryConvert(int number);

int main(){  
printf("Enter the number to convert: ");
    int n;
    scanf("%d",&n);
    BinaryConvert(n); 
return 0;  
}

void BinaryConvert(int n){
    int a[10],i;
  for(i=0;n>0;i++)    
    {    
    a[i]=n%2;    
    n=n/2;    
    }    
    printf("\nBinary of Given Number is=");    
    for(i=i-1;i>=0;i--)    
    {    
    printf("%d",a[i]);    
    }
}