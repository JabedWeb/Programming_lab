#include <stdio.h>

int main()

{
  float length,area;
  printf("please enter your length ");
  scanf("%f",&length);

  area=length*length;

  printf(" The area is %.2f",area);
  return 0;
}