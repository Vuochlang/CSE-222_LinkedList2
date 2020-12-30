#include "all.h"

void erase(LIST start, int a)
{   int result=0;
    result=delete(start,a);//calling delete function to delete the numbe
    if(result==0)//function will return 0 if it did not found the number in the list
    {       printf("NODE NOT FOUND\n");
    }
    if(result==1)//function wil return 1 if it is successfully delete the number
    {       printf("SUCCESS\n");
    }
    return;
}