

Node* deleteMid(Node* head)
{
    Node *fast=head;
    Node *slow=head;
    Node *temp=head;
    Node *rec=temp;
    
    while(fast!=NULL && fast->next!=NULL )
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    
    //delete the middle of the linked list 
    while(temp->next!=slow)
    {
        temp=temp->next;
        
    }
    temp->next=slow->next;
    slow->next=NULL;
    return rec; 
}
