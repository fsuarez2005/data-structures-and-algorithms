
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct _Node {
    char * value;

    // true if value needs to be freed
    bool allocated; 


    struct _Node * next;
};

typedef struct _Node Node;

struct _LinkedList {
    Node * root;
    Node * last;
    int length;
};

typedef struct _LinkedList LinkedList;

// ------------------------------------------------------------

// allocates new linked list
LinkedList * new_linkedlist();
Node * new_node();

void set_node_value(Node * n, char * value);



void free_linkedlist(Node * list);

int linkedlist_length(LinkedList * list);

void append_to_linked_list(LinkedList * list, char * value);

Node * get_last_node(LinkedList * list);

void print_linkedlist(LinkedList * list);






#endif