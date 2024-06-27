
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct _node {
    char * value;

    // true if value needs to be freed
    bool allocated; 
    
    struct _node * next;
} node;


typedef struct _linkedlist {
    node * root;
    node * last;
    int length;
} linkedlist;

// ------------------------------------------------------------

// allocate new linked list
linkedlist * new_linkedlist();

// allocate new node
node * new_node();

// set node value
void setvalue_node(node * n, char * value);


//void free_linkedlist(node * list);

// free all nodes in linkedlist
void free_linkedlist(linkedlist * list);

// returns length of linkedlist
int length_linkedlist(linkedlist * list);

// appends value to end of linkedlist
void append_linkedlist(linkedlist * list, char * value);

// returns last node of linkedlist
node * getlast_node(linkedlist * list);

void print_linkedlist(linkedlist * list);

#endif