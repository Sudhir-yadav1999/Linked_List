------------------------
Flattening a linked list
------------------------


Given a linked list where every node represents a linked list and contains two pointers of its type: 
(i) Pointer to next node in the main list (we call it ‘right’ pointer in the code below) 
(ii) Pointer to a linked list where this node is headed (we call it the ‘down’ pointer in the code below). 
All linked lists are sorted. See the following example  

       5 -> 10 -> 19 -> 28
       |    |     |     |
       V    V     V     V
       7    20    22    35
       |          |     |
       V          V     V
       8          50    40
       |                |
       V                V
       30               45



struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
Node *merge(Node *a,Node *b)
{
    
    Node *curr = new Node(-1); //keeping
    Node *head = curr;
    
    while(a!= NULL && b!= NULL)
    {
        if(a->data <= b->data)
        {
            curr->bottom=a;
            curr=curr->bottom;
            a=a->bottom;
            
        }
        else
        {   
            curr->bottom=b;
            curr=curr->bottom;
            b=b->bottom;
            
        }
    }
    if(a == NULL)
    {
     curr->bottom=b;   
    }
    else
    {
     curr->bottom=a;      
    }
    
    
    return head->bottom;
    
}

Node *flatten(Node *root)
{
   
   if(root!=NULL || root->next!=NULL)
   {
       return root;
   }
   
   root->next=flatten(root->next);
   root=merge(root,root->next);
   return root;
   
}
