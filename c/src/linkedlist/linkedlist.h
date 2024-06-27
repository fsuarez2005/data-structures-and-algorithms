
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
void set_node_value(node * n, char * value);


// free all nodes in linkedlist
void free_linkedlist(node * list);

int linkedlist_length(linkedlist * list);

void append_to_linked_list(linkedlist * list, char * value);

node * get_last_node(linkedlist * list);

void print_linkedlist(linkedlist * list);






#endif