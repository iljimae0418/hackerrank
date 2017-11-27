/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    Node *newNode = new Node; 
    newNode->prev = NULL;  
    newNode->next = NULL;  
    newNode->data = data; 
    if (head == NULL){
        return newNode; 
    }else if (data <= head->data){
        newNode->next = head; 
        head->prev = newNode; 
        return newNode; 
    }
    Node *rest = SortedInsert(head->next,data);  
    head->next = rest; 
    rest->prev = head; 
    return head; 
}
