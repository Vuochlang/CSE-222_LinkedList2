#include "all.h"

LIST init()
{   LIST sentinel;
    sentinel=malloc(sizeof(struct node));
    sentinel->data=49;
    sentinel->next=NULL;
    return(sentinel);
}