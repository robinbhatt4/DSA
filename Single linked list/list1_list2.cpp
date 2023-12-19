#include<stdlib.h>
#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};



node *head=NULL;
node *head2=NULL;


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
void insert2(int item)
{   node *ptr = (struct node*)malloc(sizeof(struct node));     
    node *temp; 
    ptr->data = item;  
            if(head2 == NULL)  
            {  
                ptr -> next = NULL;  
                head2 = ptr;  
                cout<<"\nNode inserted";  
            }  
            else  
            {  
                temp = head2;  
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
void display2()
{
    struct node *temp;
    temp=head2;
    while(temp!=0)
    {cout<<temp->data<<" ";
    temp=temp->next;
    }
}



int main()
{   insert(2);
    insert(4);
    insert(7);
    insert(19);
    insert(56);
    insert(34);

    insert2(3);
    insert2(4);
    insert2(7);
    insert2(1);
    insert2(6);
    insert2(34);

    cout<<endl<<"The first list is as follows-> "<<endl;
    display();
    cout<<endl;
    cout<<"The Second list is as follows-> "<<endl;
    display2();

    
   
    return 0;

}