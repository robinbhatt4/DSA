#include<stdlib.h>
#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};
 struct node *head=NULL;


void insert(int item)
{   struct node *ptr = (struct node*)malloc(sizeof(struct node));     
    struct node *temp; 
    ptr->data = item;  
            if(head == NULL)  
            {  
                ptr -> next = NULL;  
                head = ptr;  
                cout<<"\nNode inserted";  
            }  
            else  
            {  
                temp = head;  
                while (temp -> next != NULL)  
                {  
                    temp = temp -> next;  
                }  
                temp->next = ptr;  
                ptr->next = NULL;  
                cout<<"\nNode inserted";  

}
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
void del_last()
{   
    struct node *temp;
    struct node *curr= (struct node*)malloc(sizeof(struct node));  
    temp=head;
    while(temp->next!=NULL)
    {curr=temp;
        temp=temp->next;}
        free(temp);
    curr->next=NULL;
    
}
void reverse()
{
    struct node  *nextnode,*currentnode,*prevnode=NULL;
        nextnode=currentnode=head;
        while(nextnode!= NULL)
        {  nextnode=nextnode->next;
            currentnode->next=prevnode;
            currentnode=prevnode;
            currentnode=nextnode;
        }
        head=prevnode;
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
{   int j,choice;
    do{cout<<endl<<"enter the data->";
    cin>>j;
    insert(j);
    cout<<endl<<"If you want to insert more press 0->"<<endl;
    cin>>choice;
    }while(choice==0);
    cout<<"The list is as follows-> "<<endl;
    display();
    
//    cout<<endl<<"After deletion from the last";
//    del_last();
//    cout<<endl;
//    display_after_del();
//     int i;
//     cout<<endl<<"Enter the item to be searched-> ";
//     cin>>i;
//     search(i);
reverse();
display_after_del();
    return 0;

}