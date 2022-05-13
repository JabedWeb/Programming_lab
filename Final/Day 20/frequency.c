#include<stdio.h>
#include<math.h>
int main(){

    int n;
    int count=0;
    scanf("%d",&n);
    int length=log10(n)+1;
    printf("%d\n",length);
    int arra[length];
    int i=0,j=0;
    int mod;
    int digit[10]={0};
    while(n!=0){
        mod = n%10;
        arra[i]=mod;
        n=n/10;
        i++;
    }
    for(i=0;i<length;i++){
        for(j=i;j<length;j++){
        if(digit[i]==arra[j]){
            digit[i]++;
            } 
        }
    }
    for(i=0;i<10;i++){
    printf(" %d frequency %d\n",i,digit[i]);
    }
    return 0;
}