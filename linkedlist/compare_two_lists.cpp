/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    Node *curA = headA; 
    Node *curB = headB;  
    while (true){
        if (curA == NULL && curB != NULL){
            return 0; 
        }
        if (curA != NULL && curB == NULL){
            return 0;  
        }
        if (curA == NULL && curB == NULL){
            break; 
        }
        if (curA->data != curB->data){
            return 0;  
        }
        curA = curA->next; 
        curB = curB->next; 
    }
    return 1;  // passed all tests 
}
