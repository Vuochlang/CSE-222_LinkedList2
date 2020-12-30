#include "all.h"

int add(LIST start, int a)
{   LIST previous;
    LIST new;
    LIST emptynode;
    LIST temp;

    if(search(start,a)==1)//search if the number exists and leave the add program if it found the number
    {       return 0;
    }

    previous=start;
    new=start->next;

    if(new==NULL)//if this is the first time that the user is adding a number
    {   temp=malloc(sizeof(struct node));
        temp->next=NULL;
        temp->data=a;
        previous->next=temp;
        return 1;
    }

    while(new!=NULL)//a loop to go through the linkedlist if this is not the first time that the user is adding a number
    {   if(new->data>a)//if it found a number in the list that is larger than the number which we are trying to add
        {   emptynode=malloc(sizeof(struct node));
            if(emptynode==NULL)
            {       return(-2);
                free(emptynode);
            }

            previous->next=emptynode;
            emptynode->next=new;
            emptynode->data=a;
            return 1;
        }
        if(new->data<a && new->next==NULL)//if there's no any number in the list that is bigger than the number that we are trying to add
        {   emptynode=malloc(sizeof(struct node));
            if(emptynode==NULL)
            {       return(-2);
                free(emptynode);
            }
            new->next=emptynode;
            emptynode->data=a;
            emptynode->next=NULL;
            return 1;
        }
        previous=new;
        new=previous->next;
    }
}