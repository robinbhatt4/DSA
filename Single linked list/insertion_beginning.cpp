#include<stdlib.h>
#include <iostream>
using namespace std;

struct node{
    int data;
     node* next;
};
  node *head=NULL;
void insert(int new_data)
{   
    struct node *newnode;
   
    newnode= (struct node*) malloc(sizeof(struct node));
    
    newnode->data=new_data;
    
    newnode->next=head;
    
    head=newnode;
   
     cout<<endl<<new_data<<" ->inserted";
}
// void reverse()
// {
//     struct node  *nextnode,*currentnode,*prevnode=NULL;
//         nextnode=currentnode=head;
//         while(nextnode!= NULL)
//         {  nextnode=nextnode->next;
//             currentnode->next=prevnode;
//             currentnode=prevnode;
//             currentnode=nextnode;
//         }
//         head=prevnode;
// }
void reverse2()
    {
        
        node* current = head;
        node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
            // Reverse current node's pointer
            current->next = prev;
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
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
// void del_begin()
// {   
//     struct node *temp;
//     temp=head;
//     head=head->next;
//     free(temp);
// }
// void display_after_del()
// {
//     struct node *temp;
//     temp=head;
//     while(temp!=0)
//     {cout<<temp->data<<" ";
//     temp=temp->next;
//     }
// }
// void search(int item)
// {   int i=0;
//     struct node *temp;
//     temp=head;
//     while(temp!=NULL)
//     {
//         if(temp->data==item)
//         {
//             cout<<"element found at-> "<<i+1;
//         }
//         i++;
//         temp=temp->next;
//     }
// }
// void lowest()
// { int min;
//     while(head!=NULL)
//     {  if(min>head->data)   
//         { 
//             min=head->data;
             
//         }
//         head=head->next;
        
//     }
//     cout<<"The lowest is -> "<<min;
// }
int main()
{   
    insert(23);
    insert(34);
    insert(56);
    insert(13);
    insert(90);
    insert(45);
    cout<<endl;
    display();
    reverse2();
    cout<<endl<<"After reversing"<<endl;
    display();
    
    // del_begin();
    // cout<<endl;
    // display_after_del();
    // cout<<endl;
    // lowest();
    // cout<<endl<<"Enter the item to be searched-> ";
    // cin>>i;
    // search(i);

}