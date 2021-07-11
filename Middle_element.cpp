
|======================================|
|Find the middle of a given linked list|
|======================================|
Given a singly linked list, find the middle of the linked list. For example, if the given linked list is 1->2->3->4->5 then the output should be 3. 
If there are even nodes, then there would be two middle nodes, we need to print the second middle element. For example, if given linked list is 1->2->3->4->5->6 then the output should be 4

Logic ::
-----
Traverse linked list using two pointers.
Move one pointer by one and the other pointers by two.
When the fast pointer reaches the end slow pointer will reach the middle of the linked list.  
  
int getMiddle(Node *head)
{
 
 struct Node *slow=head;
 struct Node *fast=head;
 
 
 while(fast!=NULL && fast->next!=NULL)
{
    slow=slow->next;
    fast=fast->next->next;
    
    
}
 
 return slow->data;
 
 
   
}
