#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *prev,*next;
};
struct node *head=NULL;


void insert(int item)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
   
    if(head==NULL)
    {  ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=item;  
       head=ptr;
     }
    else{ptr->data=item;  
       ptr->prev=NULL;  
       ptr->next = head;  
       head->prev=ptr;  
       head=ptr;  
        
    }
    cout<<"node inserted\n";
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {   cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void del_end()
{   struct node *temp;    
    if(head==NULL)
    {
        cout<<"UNDERFLOW";
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        cout<<"Node deleted\n";
    }
    else
    {temp=head;
    while(temp->next!=NULL)
    {   
        temp=temp->next;
    }
    temp->prev->next=NULL;
    free(temp);
    cout<<"\nNode deleted\n";}

}

void del_display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {   cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void lowest()
{ struct node *curr=head;
    int min;
    while(curr!=NULL)
    {  if(min>head->data)   
        { 
            min=head->data;
             
        }
        curr=curr->next;
        
    }
    cout<<"The lowest is -> "<<min;
}
int main()
{
    insert(2);
    insert(4);
    insert(6);
    insert(10);
    insert(3);
    cout<<"The list is as follows"<<endl;
    display();
    del_end();
    cout<<"The deleted list "<<endl;
    del_display();
    lowest();
}