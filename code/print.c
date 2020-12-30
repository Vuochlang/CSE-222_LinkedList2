#include "all.h"

void print(LIST start)
{   LIST current;
    LIST new;

    current=start;
    new=start->next;

    while(new!=NULL)
    {       printf("%d ",new->data);
        current=new;
        new=current->next;
    }
    printf("\n");
}