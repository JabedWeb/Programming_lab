#include<stdio.h>
#include <string.h>
struct information
{
     char name;
     int  id;
};

int main(){
    struct information person;
    strcpy(person.name,"Jabed");
    person.id=46;
    printf ( " %d",person.id);
    printf ( " %s",person.name);
    return 0;
}