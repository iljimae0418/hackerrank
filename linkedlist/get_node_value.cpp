/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    int size = 0;  
    Node *cur = head; 
    while (cur->next != NULL){
        cur = cur->next;  
        size++;  
    }
    cur = head; 
    // iterate again, and get the value at position size-positionFromTail  
    int cnt = 0; 
    while (cnt < size-positionFromTail){
        cur = cur->next; 
        cnt++; 
    }
    return cur->data; 
}
