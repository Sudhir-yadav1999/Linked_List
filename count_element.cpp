  
---------
Recursive
---------

int getCount(struct Node* head)
    {
    
     
     if(head==NULL )
     {
         return 0;
     }
     
    return 1+getCount(head->next);
     
     
     
    }
-------------
Iterative
-------------

int count=0;
while(head!=NULL)
{

  count+=1;
  head=head->next;
}
return count;
