#include "all.h"

int main()
{   int run=0, number=0, flag=1, returnvalue=0;
    char str[100],command;
    LIST start;

    printf("\n--------------Welcome to LinkedList program--------------\n");
    start=init();
    while(flag==1)//loop
    {   printf (">");
        fgets(str, 100, stdin);// get input
        returnvalue=sscanf(str,"%c%d", &command, &number);
        if(returnvalue!=2)
        {   if(command=='x')//command for exiting the program and free all the memory before exit
            {       free_memory(start);
                return 0;
            }
            else if(command=='p')//printing the numbe that stored in the linkedlist
            {       print(start);
            }
            else {prompt(1);}//printing the prompt to show the user how to using each commands
        }
        if(returnvalue==2)
        {
            switch(command){
                case'i': insert(start,number);break;//adding a number in the linkedlist
                case's': run=search(start,number);break;//search for a number in the linkedlist
                case'd': erase(start,number);break;//erase a number from the linkedlist and free the memory at the same time
                default: prompt(1);//print the prompt to show the user how to use it
            }
            if (command=='s' && run==1) printf("FOUND\n");//if search is success
            if (command=='s' && run==0) printf ("NOT FOUND\n");//if search is not success
        }
    }
    return 0;
}