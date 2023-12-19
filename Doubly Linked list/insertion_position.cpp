#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *prev,*next;
};
struct node *head=NULL;

void insert_pos(int item,int p)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
   struct node *temp;
   temp=head;
    if(head==NULL)
    {   ptr->data=item;
        
        ptr->prev=NULL;
        ptr->next=NULL;
        head=ptr;
     }
     else{
        for(int i=0;i<p;i++)
        {
            temp=temp->next;
        }
         ptr->data = item;  
       ptr->next = temp->next;  
       ptr -> prev = temp;  
       temp->next = ptr;  
       temp->next->prev=ptr;  
       cout<<"Node Inserted\n";  
     } 

}
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
void del_pos(int element)
{   struct node *temp;
temp=head;
while(temp->data!=element)
{   
    temp=temp->next;
}
if(head==temp)
{
head=temp->next;

}
else if(temp->next!=NULL)
{   temp->next->prev=temp->prev;
    
    cout<<"NODE DELETED\n";
}
else if(temp->prev!=NULL){
    temp->prev->next=temp->next;
   
cout<<"NODE DELETED\n";}
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
int main()
{   int pos,num,element;
    insert(2);
    insert(4);
    insert(78);
    insert(14);
    insert(6);
    insert(10);
    cout<<"The list is as follows"<<endl;
    display();
    cout<<endl<<"enter the element-> ";
    cin>>element;
    del_pos(element);
    cout<<"The deleted list "<<endl;
    del_display();
    cout<<endl<<"enter the number -> ";
    cin>>num;
    cout<<endl<<"enter the position-> ";
    cin>>pos;
    insert_pos(num,pos);
    cout<<endl<<"After insertion at kth position"<<endl;
    display();
}