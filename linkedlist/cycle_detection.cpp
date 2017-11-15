/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // let's use floyd's cycle detection algorithm 
    Node *slowPtr = head, *fastPtr = head;  
    while (slowPtr != NULL && fastPtr != NULL){
        fastPtr = fastPtr->next; 
        if (fastPtr == slowPtr) return true; // cycle exists  
        if (fastPtr == NULL) return false; // cycle does not exist 
        fastPtr = fastPtr->next; 
        if (fastPtr == slowPtr) return true; // cycle exists  
        slowPtr = slowPtr->next; 
    }
    return false; // cycle does not exist 
}
