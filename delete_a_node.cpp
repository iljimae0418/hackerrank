/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    Node *cur = head; 
    int cnt = 0; 
    if (position == 0){
        Node *temp = head->next; 
        delete head; 
        head = temp;  
        return head; 
    }
    while (cnt < position-1 && cur != NULL){
        cnt++; 
        cur = cur->next; 
    }
    Node *temp = cur->next; 
    cur->next = cur->next->next; 
    delete temp; 
    return head;  
}
