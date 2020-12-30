#include "all.h"

int search(LIST start, int a)
{   LIST first;
    LIST second;

    first=start;
    second=start->next;

    while(second!=NULL)//a loop to go through the linkedlist until it hits NULL
    {       if(second->data==a)//when it found the number, it will return 1
        {       return 1;
        }
        first=second;
        second=second->next;
    }
    return 0;//when it did not find the number in the linkedlist
}