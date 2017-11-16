/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    Node *curA = headA; 
    Node *curB = headB; 
    int sizeA = 0, sizeB = 0; 
    while (curA != NULL){
        sizeA++; 
        curA = curA->next; 
    }
    while (curB != NULL){
        sizeB++; 
        curB = curB->next; 
    }
    int diff = -1; 
    if (sizeA > sizeB){
        diff = sizeA-sizeB; 
    }else{
        diff = sizeB-sizeA; 
    }
    // traverse diff number of times, so that we can travel in parallel 
    curA = headA, curB = headB;  
    if (sizeA > sizeB){
        int cnt = 0;  
        while (cnt < diff){
            curA = curA->next; 
            cnt++; 
        }
    }else{
        int cnt = 0; 
        while (cnt < diff){
            curB = curB->next;  
            cnt++;  
        }
    }
    while (curA != NULL && curB != NULL){
        if (curA->data == curB->data){
            return curA->data; 
        }
        curA = curA->next; 
        curB = curB->next; 
    }
    return -1; 
}
