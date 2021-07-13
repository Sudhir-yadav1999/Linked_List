
------------------------------------------------
Remove duplicate element from sorted Linked List
------------------------------------------------

void removeDuplicates(struct Node* head)
{
    
  struct Node *temp=head;
  struct Node *nex=head;
  struct Node *tt=head;
  
  while(temp!=NULL)
  {
      
      if(temp->data == temp->next->data)
      {
          
          tt=tt->next;
          temp->next=temp->next->next;
          tt->next=NULL;
          
      }
      else
      {
         temp=temp->next;
          
      }
      
  }
 
  
}
