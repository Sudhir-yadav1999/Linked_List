#include <bits/stdc++.h>

using namespace std;
class linked
{
    
class node
{
 public:
    int data;
    struct node *next;
    
}*temp,*newnode,*head=NULL,*tail=NULL;


public:


void display()
{
    temp=head;
    cout<<"Display the linked list :"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
}

void add_node(int ele)
{
    
    newnode=new node;//memory block
    
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
    
}

void Insertion_at_beggining()
{
    int element;
    cout<<"enter the data into node to be inserted at starting :"<<endl;
    cin>>element;
    
    newnode=new node;
    newnode->next=head;
    head=newnode;
    
}

void Insertion_at_end()
{
    int val;
    cout<<"enter the data into node to be inserted at End:"<<endl;
    cin>>val;
    
    newnode=new node;
    
    newnode->data=val;
    tail->next=newnode;
    tail=newnode;
}
  
  void insertion_at_specific_pos(int pos)
  {
      int va;
      cout<<"Enter the node data that is inserted at specified position :"<<endl;
      cin>>va;
      newnode =new node;
      newnode->data=va;
      temp=head;
      for(int i=0;i<pos-1;i++)
      {
        temp=temp->next;   
      }
      newnode->next=temp->next;
      temp->next=newnode;
  }
  
  void delete_at_begin()
  {
      temp=head;
      head=head->next;
      temp->next=NULL;
      
  }
  
  void delete_at_end()
  {
      temp=head;
      while(temp->next!=tail)
      {
        temp=temp->next;  
      }
      temp->next=NULL;
      tail=temp;
      
  }
  void delete_at_specific(int pos)
  {
      temp=head;
      
      for(int i=0;i<pos-1;i++)
      {
          temp=temp->next;
      }
      temp->next=temp->next->next;
      
  }
  
  

};
int main()
{
    
   
    char ch;
    int ele;
    linked l1;
    
      
    do{ 
    int n;
    cout<<"Enter the operation you want to perform in the linked list :"<<endl;
    cout<<"1)push::: 2)Display::: 3)Insertion_at_beggining:::  4)insertion_at_specific_pos:::  5)Insertion_at_end::: "<<endl;
    cout<<"6)delete_at_begin::: 7)delete_at_end:::  8)delete_at_specific::: ";
    cin>>n;
    switch(n)
    {
        case 1:
            cout<<"Enter the data to enter into the linked list :"<<endl;
            cin>>ele;
            l1.add_node(ele);
            break;
            
        case 2:
             l1.display();
            break;
        case 3:
            l1.Insertion_at_beggining();
            break;
        case 4:
            int pos;
            cout<<"Enter the position of insertion :"<<endl;
            cin>>pos;
            l1.insertion_at_specific_pos(pos);
            
            break;
        case 5:
           l1.Insertion_at_end();
           break;
        case 6:
           l1.delete_at_begin();
           break;
           
        case 7:
            
           l1.delete_at_end();
           break;
           
        case 8:
            int ps;
            cout<<"Enter the position of deletion :"<<endl;
            cin>>ps;
           l1.delete_at_specific(ps);
           break;
           
           
        default:
            cout<<"Wrong key is pressed :"<<endl;
    }
    
    
    cout<<"Do you want to continue press Y else N"<<endl;
    cin>>ch;
    fflush(stdin);
    
    }while(ch=='Y');
    
	
	
	
	
	return 0;
}
