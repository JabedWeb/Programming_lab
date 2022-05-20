#include <stdio.h>
int main()
{

    int a[50],i,large,small,n;
    printf("how many number do you want to check: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    large=a[0];
    small=a[0];
    for(i=1;i<n;i++){
        if(a[i]>large){
        large=a[i];
        }
        else if(a[i]<small){
            small=a[i];
        }
    }

    printf("the large number %d\n",large);
    printf("the small number %d",small);
}