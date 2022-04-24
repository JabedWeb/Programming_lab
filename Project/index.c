#include<stdio.h>
#include <string.h>
void age_cal(int n);

int main(){
  int age;
  scanf("%d",&age);
  age_cal(age);
  return 0;
}

void age_cal(age){
    if (age<8){
        printf("You are baby");
    }
}