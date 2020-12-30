#include "all.h"

void free_memory(LIST start)
{   LIST previous;
    LIST new;

    previous=start;
    new=start->next;

    while(new!=NULL)//a loop to free all the memories until the next memory is NULL
    {       free(previous);
        previous=new;
        new=new->next;
    }
    free(previous);//free the one memory that is located right before the NULL
}