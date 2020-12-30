#include "all.h"

int delete(LIST start, int a)
{   int result=0, flag=1;
    LIST previous_node;
    LIST next_node;
    LIST pointer;

    result=search(start,a);//search for the number that we are trying to delete in the list
    if (result==0)//when the number is not found in the list
    {
        return 0;
    }
    if(result==1)//when the number is found
    {       previous_node=start;
        next_node=start->next;
        while(flag==1)//a lopp to go through thr list to get previous and next node, so it can free the memory of the number that we want to delete
        {       if(next_node->data==a)
            {       pointer=next_node->next;
                previous_node->next=pointer;
                free(next_node);
                return 1;
            }
            previous_node=next_node;
            next_node=next_node->next;
        }
    }
}