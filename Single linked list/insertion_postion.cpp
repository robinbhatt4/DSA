#include<stdlib.h>
#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};
 struct node *head=NULL;
void insert_pos(int item,int pos)
{   struct node *ptr = (struct node*)malloc(sizeof(struct node));     
    struct node *temp; 
    ptr->data=item;
    if(head==NULL)
    {   ptr -> next = NULL;  
        head = ptr;  
        printf("\nNode inserted"); 
    }
    else
        { temp=head;
        for(int i=0;i<pos;i++)
         {  
            temp=temp->next;
         
         }
        ptr->next=temp->next;
        temp->next=ptr;
        }
} 
void insert(int item)
{   
    struct node *ptr;
    ptr= (struct node*) malloc(sizeof(struct node));
    ptr->data=item;
    ptr->next=head;
    head=ptr;
     cout<<endl<<item<<" ->inserted";
}
void display()
{
    struct node *temp;
    temp=head;
    while(temp!=0)
    {cout<<temp->data<<" ";
    temp=temp->next;
    }
}
 void del_begin(int i)
{   
    struct node *temp,*curr;
    temp=head;
    while(temp->data=i)
    {
        temp=temp->next;
    }
    
    free(temp);
}
void display_after_del()
{
    struct node *temp;
    temp=head;
    while(temp!=0)
    {cout<<temp->data<<" ";
    temp=temp->next;
    }
 }
void search(int item)
{   int i=0;
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==item)
        {
            cout<<"element found at-> "<<i+1;
        }
        i++;
        temp=temp->next;
    }
}
int main()
{   int i,pos,num;
    
    insert(23);
    insert(34);
    insert(56);
    insert(13);
    insert(90);
    insert(45);
    cout<<endl;
    display();
    cout<<endl<<"enter the number -> ";
    cin>>num;
    cout<<endl<<"enter the position-> ";
    cin>>pos;
    insert_pos(num,pos);
    cout<<endl<<"List after insertion at kth position"<<endl;
    display();
    cout<<endl<<"Enter the item to be deleted-> ";
    cin>>i;
    del_begin(i);
    cout<<"Deleted list-> "<<endl;
    display_after_del();
    search(i);

}