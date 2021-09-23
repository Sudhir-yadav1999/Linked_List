  
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


----------
search
----------
~Recursive

bool search(struct Node* head, int x) 
{ 
    // Base case 
    if (head == NULL) 
        return false; 
      
    // If key is present in current node, return true 
    if (head->key == x) 
        return true; 
  
    // Recur for remaining list 
    return search(head->next, x); 
} 

~Iterative

bool search(Node* head, int x) 
{ 
    Node* current = head; // Initialize current 
    while (current != NULL) 
    { 
        if (current->key == x) 
            return true; 
        current = current->next; 
    } 
    return false; 
} 




