/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    Node *curNode = head;  
    Node *prevNode = NULL;  
    Node *nextNode = NULL; 
    // the reversing step 
    while (curNode != NULL){
        nextNode = curNode->next; 
        curNode->next = prevNode; 
        prevNode = curNode;  
        curNode = nextNode; 
    }
    head = prevNode; 
    return head; 
}
