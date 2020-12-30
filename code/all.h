//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Name: Vuochlang Chang                                                                                                            //
// Class: CSE222        Winter-2020     2419                                                                                        //
// Date: 02/01/2020                                                                                                                 //
// Assignment: PA2 - LinkedList2                                                                                                    //
// This code will allow user to configuring a given link list by adding, deleting, printing and searching for a certain number.     //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

struct node {   int data;
    struct node *next;
};

typedef struct node* LIST;

LIST init();
//LIST getnode();
void prompt(int);
void free_memory(LIST);
void print(LIST);
int search(LIST, int);
void erase(LIST, int);
int delete(LIST, int);
void insert(LIST, int);
int add (LIST, int);