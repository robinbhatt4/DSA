#include<stdlib.h>
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;   //pointer to a struct node(self refferential structure)
};
struct node* head=NULL;//value         A pointer however, is a variable that stores the memory address as its value.

void insert(int new_data)
{
    struct node* new_node=(struct node*) malloc(sizeof(struct node)); //memory allocation
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
}
void display()
{
    struct node* ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main()
{   
    insert(3);
    insert(3);
    insert(6);
    insert(8);
    insert(4);
    insert(5);
    
    cout<<"The elements are as follows"<<endl;
    display();
    
}