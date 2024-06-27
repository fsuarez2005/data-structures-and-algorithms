#include "linkedlist.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


void test_linkedlist_2() {
    char * test_string = "hello";
    int test_string_len = strlen(test_string);
    
    LinkedList * list = new_linkedlist();
    
    list->root = new_node();
    
    set_node_value(list->root,test_string);
    
    Node * currentNode = list->root;
    
    for (int i = 0; i<10; i++) {
        Node * newNode = new_node();
        set_node_value(newNode,test_string);
        
        currentNode->next = newNode;
        
        currentNode = currentNode->next;
    }
    
    
    print_linkedlist(list);

    
}

void test_linkedlist() {
    char * test_string = "hello";
    int test_string_len = strlen(test_string);
    
    
    LinkedList * list = (LinkedList *) malloc(sizeof(LinkedList));
    
    list->root = (Node *) malloc(sizeof(Node));
    
    list->root->value = (char *) malloc((test_string_len+1)*sizeof(char));
    strncpy(list->root->value,test_string,test_string_len+1);
    
    
    list->root->allocated = true;
    
    Node * currentNode = list->root;
    
    for (int i = 0; i<10; i++) {
        Node * newNode = (Node *) malloc(sizeof(Node));
        
        currentNode->next = newNode;
        
        currentNode->value = (char *) malloc ((test_string_len+1)*sizeof(char));
        strncpy(currentNode->value,test_string,test_string_len+1);

        currentNode->allocated = true;
        
        currentNode = currentNode->next;
    }
    
    
    print_linkedlist(list);
    
     
}


int main(int argc, char * argv[]) {
    printf("Linked List\n");
    
    
    test_linkedlist_2();
    
    
    return 0;
}