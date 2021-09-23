------------------------------------
Node at a given index in linked list
------------------------------------

Index -5
5
element-657  
             1 2 3 4 657 76
Index -2
2 
element-7
             8 7 10 8 6 1 20 91 21 2
  
  -------------------------------------------
  Recursion
  -------------------------------------------
  int GetNth(struct node* head, int index){
  
  if(index==1)
  {
      return head->data;
  }
  
  GetNth(head->next,index-1);
  
   }
  ----------------------------------------------
  Iterative 
  ----------------------------------------------
  int GetNth(struct node* head, int index){
  
  struct node *temp=head;
  
  while(index!=1)
  {
  index -=1;
  temp=temp->next;
      
  }
  
  return temp->data;
  
  
  
}
