#include <stdio.h>
//#include "Chains.h"

int hash(int key)
{
    return key%10;
}
void Insert(struct Node *H[],int key)
{
    int index = hash(key);
    SortedInsert(&H[index],key);
}
int main()
{
    struct Node *HT[10];
    struct Node *temp;
    int i;

    for(i=0;i<10;i++)
    HT[i]=NULL;

    Insert(HT,12);
    Insert(HT,22);
    insert(HT,42);

    temp =Search(HT[hash(21)],22);
    printf("%d",temp->data);

    return 0;

}