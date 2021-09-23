--------------------------------
Nth node from end of linked list 
--------------------------------

Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

------------
Brute Force
------------
int getNthFromLast(struct Node *head, int n)
{
   
   int count =0;
   struct Node *temp=head;
   while(temp!=NULL)
   {
       count +=1;
       temp=temp->next;
       
       
   }
   
   
   int val=count-n;
   
   if(n>count)
   {
       return -1;
   }
 
   struct Node *temp1=head;
   while(val!=0)
   {
       val -=1;
       temp1=temp1->next;
       
   }
   
   return temp1->data;
}

----------------------------------------------------
---------
Recursive
---------
void printNthFromLast(struct Node* head, int n)
{
	int i = 0;
	if (head == NULL)
		return;
	printNthFromLast(head->next, n);
	if (++i == n)
		cout<<head->data;
}
----------------------------------------------------
Two pointer approach
----------------------------------------------------
int getNthFromLast(struct Node *head, int n)
{
   struct Node *ptr1=head;
   struct Node *ptr2=head;
   
   //moving ptr1 to n-1 move forward
   
   for(int i=1;i<n;i++)
   {
   if(ptr1->next==NULL)
   {
       return -1;
   }
   ptr1=ptr1->next;
   }
   
   //then moving both the pointer together
   while(ptr1->next!=NULL)
   {
       ptr2=ptr2->next;
       ptr1=ptr1->next;
       
   }
   return ptr2->data;
   
}
------------------------------------------------------



