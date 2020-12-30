#include "all.h"

void insert (LIST start, int a)
{   int result=0;
    result=add(start,a);//call add function to add a number and get the return value
    if (result==1)//add function will return 1 if success
    {       printf("SUCCESS\n");
        return;
    }
    if (result==0)//add funstion will return 0 if it foung the same number in the linkedlist
    {       printf("NODE ALREADY IN LIST\n");
        return;
    }
    if (result==(-2))//add function will return -2 when it is out of memory
    {       printf("OUT OF MEMORY\n");
        return;
    }
}