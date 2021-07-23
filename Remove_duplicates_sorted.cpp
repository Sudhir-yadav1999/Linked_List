
------------------------------------------------
Remove duplicate element from sorted Linked List
------------------------------------------------

void removeDuplicates(struct Node* head)
{
    
  struct Node *temp=head;
  struct Node *nex=head;
  
  while(temp!=NULL)
  {
      
      if(temp->data == temp->next->data)
      {
        
              nex=temp->next->next;
              delete(temp->next);
             temp->next=nex;
          
      }
      else
      {
         temp=temp->next;
          
      }
      
  }
 
  
}
Time Complexity= o(n)
    
========    
Hash Map 
========

void removeDuplicates(Node* head)
{
    unordered_map<int, bool> track;
    Node* temp = head;
    while (temp) {
        if (track.find(temp->data) == track.end()) {
            //If value is not present then display 
            cout << temp->data << " ";
        }
        track[temp->data] = true;
        temp = temp->next;
    }
}

