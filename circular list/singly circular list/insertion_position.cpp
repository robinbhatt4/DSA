#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node *next;
};
struct node *head=NULL;

void beg_insert(int item)    
{    
        
    struct node *ptr = (struct node *)malloc(sizeof(struct node));    
    struct node *temp;  
    if(ptr == NULL)    
    {    
        cout<<"\nOVERFLOW";    
    }    
    else     
    {    
        ptr -> data = item;    
        if(head == NULL)    
        {    
            head = ptr;    
            ptr -> next = head;    
        }    
        else     
        {       
            temp = head;    
            while(temp->next != head)    
                temp = temp->next;    
            ptr->next = head;     
            temp -> next = ptr;     
            head = ptr;    
        }     
    cout<<"\nNode Inserted\n";  
    }    
                
}

void insertPosition (int data, int pos)	
{
  struct node *newnode, *curNode;
  if (head == NULL)
    {
      cout<<"List is empty";
    }
  if (pos == 1)
    {
      beg_insert(data);
      return;
    }
  else
    {
      newnode = (struct node *) malloc (sizeof (struct node));
      newnode->data = data;
      curNode = head;
      while (--pos > 1)
	{
	  curNode = curNode->next;
	}
      newnode->next = curNode->next;
      curNode->next = newnode;
    }
}


void display ()
{   struct node *temp=head;
  if (head == NULL)
    return;
do
    {
      cout<<endl<<temp->data;
      temp = temp->next;

    }
  while (temp != head);
  cout<<endl;
}

int main ()
{int pos,num;
    beg_insert(4);
    beg_insert(89);
    beg_insert(12);
    beg_insert(86);
    beg_insert(78);
    beg_insert(89);
    beg_insert(45);
    beg_insert(23);
    cout<<"the list is as follows->"<<endl;
    display();
 cout<<"enter the number-> ";
 cin>>num;
 cout<<"enter the position-> ";
 cin>>pos;
  insertPosition (num,pos);
  display ();
  del_at_pos();
  cout<<"The deleted list"<<endl;
  display();

  return 0;
}