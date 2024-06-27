
#include "linkedlist.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// returns NULL if cannot allocate
linkedlist * new_linkedlist() {
    printf("ENTRY: new_linkedlist()\n");
    linkedlist * output = malloc(sizeof(linkedlist));
    if (output == NULL) {
        fprintf(stderr,"ERROR: Cannot allocate.\n");
    }
    return output;
}

node * new_node() {
    node * output = (node *) malloc(sizeof(node));
    if (output == NULL) {
        fprintf(stderr,"ERROR: Cannot allocate.\n");
    }
    output->allocated = true;
    
    
    return output;
}

void setvalue_node(node * n, char * value) {

    // should pass len, but we will assume \0 term
    int value_len = strlen(value);
    
    n->value = (char*) malloc((value_len+1)*sizeof(char));
    
    strncpy(n->value,value,value_len+1);
}


void append_linkedlist(linkedlist * list, char * value) {
    printf("ENTRY: append_linkedlist()\n");
    // get last node
    node * last_node = getlast_node(list);
    
    node * n = new_node();
    
    setvalue_node(n,value);
    
    last_node->next = n;
}


// TODO: test
node * getlast_node(linkedlist * list) {
    printf("ENTRY: getlast_node()\n");
    if (list == NULL || list->root == NULL) {
        return NULL;
    }
    
    node * current_node = list->root;
    
    // if current_node->next == NULL, then current_node is last node
    // first node may be last node
    
    // cycle through nodes until 
    while (current_node->next != NULL) {
        current_node = current_node->next;
    }
    // current_node should be last node
    
    return current_node;   
}

// TODO: test
int length_linkedlist(linkedlist * list) {
    printf("ENTRY: length_linkedlist()\n");
    // NULL guard
    if (list == NULL) {
        return 0;
    }
    
    if (list->root == NULL) {
        return 0;
    }
    
    
    node * current_node = list->root;
    int count = 1;
    
    while (current_node->next != NULL) {
        current_node = current_node->next;
        count++;
    }
    
    
    return count;
}

/*

// OLD
// TODO: convert to non-recursive
void free_linkedlist(node * list) {
    if (list == NULL) {
        printf("list is null\n");
        // cannot free null
        return;
    } else if (list->next == NULL) {
        printf("list->next is null\n");
        // last node

        if (list->allocated) {
            free(list->value);
        }

        // free this node
        free(list);
        return;
    } else if (list->next != NULL) {
        printf("list->next is not null\n");
        // free next node
        free_linkedlist(list->next);
        
        if (list->allocated) {
            free(list->value);
            
        }
        
        // set next to NULL
        free(list);
        return;
    }
}

*/


void free_linkedlist(linkedlist * list) {
    node * current_node = list->root;
    
    
    while (current_node != NULL) {
        // save next node so can move to it
        // next node may be NULL so stop loop then
        node * next_node = current_node->next;
        
        // free any associated values
        if (current_node->allocated) {
            free(current_node->value);
        }
        
        // free current_node
        free(current_node);
        
        // change to next node
        current_node = next_node;
    }
    
    // free linkedlist
    free(list);
}

// TODO: test
void print_linkedlist(linkedlist * list) {
    node * current_node = list->root;
    
    int count = 0;
    
    while (current_node != NULL) {
        printf("(%d) %s\n",count,current_node->value);
        
        current_node = current_node->next;
        
        count++;
    }
}
