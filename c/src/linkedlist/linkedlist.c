
#include "linkedlist.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

LinkedList * new_linkedlist() {
    printf("ENTRY: new_linkedlist()\n");
    LinkedList * output = (LinkedList *) malloc(sizeof(LinkedList));
    return output;
}

Node * new_node() {
    Node * output = (Node *) malloc(sizeof(Node));
    output->allocated = true;
    
    
    return output;
}

void set_node_value(Node * n, char * value) {

    // should pass len, but we will assume \0 term
    int value_len = strlen(value);
    
    n->value = (char*) malloc((value_len+1)*sizeof(char));
    
    strncpy(n->value,value,value_len+1);
}


void append_to_linked_list(LinkedList * list, char * value) {
    printf("ENTRY: append_to_linked_list()\n");
    // get last node
    Node * last_node = get_last_node(list);
    
    Node * n = new_node();
    
    set_node_value(n,value);
    
    last_node->next = n;
}


// TODO: test
Node * get_last_node(LinkedList * list) {
    printf("ENTRY: get_last_node()\n");
    if (list == NULL || list->root == NULL) {
        return NULL;
    }
    
    Node * current_node = list->root;
    
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
int linkedlist_length(LinkedList * list) {
    printf("ENTRY: linkedlist_length()\n");
    // NULL guard
    if (list == NULL) {
        return 0;
    }
    
    if (list->root == NULL) {
        return 0;
    }
    
    
    Node * current_node = list->root;
    int count = 1;
    
    while (current_node->next != NULL) {
        current_node = current_node->next;
        count++;
    }
    
    
    return count;
}


// TODO: test
void free_linkedlist(Node * list) {
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

// TODO: test
void print_linkedlist(LinkedList * list) {
    Node * current_node = list->root;
    
    int count = 0;
    
    while (current_node != NULL) {
        printf("(%d) %s\n",count,current_node->value);
        
        current_node = current_node->next;
        
        count++;
    }
}
