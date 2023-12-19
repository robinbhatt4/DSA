#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *prev,*next;
};
struct node *head=NULL;


void insert(int i)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
   
    if(head==NULL)
    {   ptr->data=i;
        
        ptr->prev=NULL;
        ptr->next=NULL;
        head=ptr;
     }
    else{
      ptr->data=i;  
      ptr->prev=NULL;
      ptr->next=head;  //head has store the value of the next node
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
void del_start()
{   struct node *temp;
temp=head;
head=head->next;
head->prev=NULL;
free(temp);


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
    insert(27);
    insert(4);
    insert(6);
    insert(10);
    insert(45);
    insert(17);
    insert(56);
    cout<<"The list is as follows"<<endl;
    display();
   del_start();
   cout<<"The deleted list "<<endl;
   display();
    lowest();
    
    
}