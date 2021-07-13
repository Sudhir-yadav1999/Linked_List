===========================================
remove duplicates from unsorted linked list
===========================================

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     
     Node *temp=head;
     Node *d=temp;
     unordered_map<int,bool> track;
     Node *prev=NULL;
     
     while(temp!=NULL)
     {
         
         if(track.find(temp->data) != track.end())
         {//element is present 
         
             prev->next = temp->next;
             temp->next = NULL;       
         }
         else{
             
         track[temp->data]=true;
         prev=temp;
         }
         temp=prev->next;
     }
     return d;
     
    }
};
