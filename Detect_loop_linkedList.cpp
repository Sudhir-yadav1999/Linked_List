
-------------------------------
Detecting loop in a linked list
-------------------------------

Floyd’s Cycle detection algorithm terminates when fast and slow pointers meet at a common point. 


 bool detectLoop(Node* head)
    {
  
    Node *slow=head;
    Node *fast=head;
  
    while(fast!=NULL && slow!=NULL && fast->next!=NULL)
    {
     
     slow=slow->next; // slow pointer
     fast=fast->next->next; //fast pointer 
      
      if(fast==slow) //if loop is there slow and fast will meet surely in a linked list 
      {
        return true;
      }
    
    }
  
    return false;
     
    
    }

------------------------------------
Removing the loop in the linked list
------------------------------------

void removeLoop(Node* head)
    {
       Node *slow=head;
       Node *fast=head;
       
       while(fast!=NULL && slow!=NULL && fast->next!=NULL)
       {
           slow=slow->next;
           fast=fast->next->next;
           
           if(slow==fast)
           {
               break;
           }
       }
       if(slow=head)
       { //case 1: if slow and fast both reached head 
          while(fast->next!=slow)
          {
              fast=fast->next;
          }
          fast->next=NULL;
       }
       else if(slow==fast)
       {
           //case 2: if slow and fast both are equal so make slow as head and increment fast 
           //and slow by one position untill their next are equal
           
           slow=head;
           while(slow->next!=fast->next)
           {
           slow=slow->next;
           fast=fast->next;
           }
           fast->next=NULL;
           
       }
        
    }

-------------
Using hashMap
-------------
void hashAndRemove(Node* head)
{
	// hash map to hash addresses of the linked list nodes
	    Node *prev=NULL;
        Node *curr=head;
        unordered_map<int,bool> track;
        
        while(1)
        {
         
         if(track.find(curr->data)==track.end())
         {
             //not present element 
             track[curr->data]=true; //add data 
             prev=curr;
             curr=curr->next;
         }
         else
         {
           //present value so break the loop
           
           break;
           
         }
        
        }
        prev->next=NULL;
        
}



