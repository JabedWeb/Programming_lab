#include<stdio.h>
#include<ctype.h>
#define MAX_LEN 100
#define SIZE 1000

struct Product {
    int item_no;
    char item_name[MAX_LEN+1];
    int on_hand;
    float price;
};

void Insert(struct Product items [],int x){
    scanf("%d",&items[x].item_no);
    fflush(stdin);
    gets(items[x].item_name);
    scanf("%d",&items[x].price);
}

void PrintAll(struct Product items[],int x){
    for(int i=0;i<=x;i++){
        printf("%d \t %s \t %d",items[i].item_no,items[i].item_name,items[x].price);
    }
}


int main()
{
    struct Product items[SIZE];
    int Index = -1;
    int x = 0;

    char ch = '\0';
    while (ch != 'q')
    {
        printf("\n-------------------------\n");
        printf("Press i: Insert \n      s: Search\n      u: Update\n      p: Print\n      a: Print All\n      q: Quit");
        printf("\n-------------------------\n\n");
        fflush(stdin);
        scanf("%c", &ch);
        tolower(ch);
        switch (ch)
        {
        case 'i':
            Index++;
            Insert(items, Index);
            break;
        case 'a':
            PrintAll(items, Index);
            break;

        case 'q':
            printf("\n\tTHANK YOU\n\n");
            break;
        }
    }

    return 0;
}
