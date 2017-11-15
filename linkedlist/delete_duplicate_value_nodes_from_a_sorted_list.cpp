/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include <set> 
Node* RemoveDuplicates(Node *head)
{
    set<int> chk; 
    Node *prev = head; 
    Node *cur = head; 
    while (cur != NULL){
        if (!chk.count(cur->data)){
            chk.insert(cur->data); 
            prev = cur; 
            cur = cur->next; 
        }else{
            // we have encountered a duplicated element 
            prev->next = cur->next; 
            cur = cur->next; 
        }
    }
    return head;  
}
