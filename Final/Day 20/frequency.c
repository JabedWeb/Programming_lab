#include<stdio.h>
#include<math.h>
int main(){

    int n;
    scanf("%d",&n);
    int length=log10(n)+1;
    printf("%d\n",length);
    int arra[length];
    int i=0;
    int mod;
    while(n!=0){
        mod = n%10;
        arra[i]=mod;
        n=n/10;
        i++;
    }
    
    for(i=0;i<length;i++){
    printf("%d",arra[i]);
    }

    return 0;
}