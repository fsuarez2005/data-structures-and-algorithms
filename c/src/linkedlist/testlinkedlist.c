#include "linkedlist.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


void create_linkedlist_from_input() {
    linkedlist * list = new_linkedlist();
    
    list->root = new_node();
    

}






int main(int argc, char * argv[]) {
    printf("Linked List\n");
    
    
    create_linkedlist_from_input();
    
    return 0;
}