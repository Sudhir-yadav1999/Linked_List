

#include <bits/stdc++.h>

using namespace std;

struct node
{
 
 int data;
 struct node *next;
    
}*temp,*newnode;


void display(struct node *head)
{
    temp=head;
    cout<<"Display the linked list :"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
}


int main()
{
    
    struct node *head=NULL,*tail=NULL;
    int ele;
    
    char ch;
    do
    {
      newnode=(node *)malloc(sizeof(node));
      cout<<"Enter the data to enter into the linked list :"<<endl;
      cin>>ele;
      
      newnode->data=ele;
      newnode->next=NULL;
          
      if(head==NULL)
      {
          head=newnode;
          tail=newnode;
      }
      else
      {
          tail->next=newnode;
          tail=newnode;
      }
        
        
    
    cout<<"Do you want to continue or not :"<<endl;
    cin>>ch;
    
    fflush(stdin);
    
    }while(ch=='Y');
    
	
	
	display(head);
	
	return 0;
}
