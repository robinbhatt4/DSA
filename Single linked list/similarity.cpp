#include<stdlib.h>
#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};



node *head=NULL;
node *head2=NULL;
node *head3=NULL;


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
{   cout<<endl<<"The first list is as follows-> "<<endl;
    struct node *temp=head;
    struct node *temp2=head2;

    while(temp!=0)
    {cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl<<"The Second list is as follows-> "<<endl;
    
    while(temp2!=0)
    {cout<<temp2->data<<" ";
    temp2=temp2->next;
    }
}

void similarity()
{   int count=0;
 
    struct node *temp=head;
    struct node *temp2=head2;
    struct node *temp3;
    while(temp!=NULL)
    {
        while(temp2!=NULL)
        {
            if(temp->data==temp2->data)
            {  count++;
            if(count==1)
            {
                node *ptr = (struct node*)malloc(sizeof(struct node)); 
                ptr->data=temp->data;
                ptr->next=NULL;
                ptr=head3;
                cout<<"\nNode inserted1"; 
            } 
            else{ 
                node *ptr = (struct node*)malloc(sizeof(struct node)); 
                temp3= head3;  
                while (temp3 -> next != NULL)  
                {  
                    temp3 = temp3 -> next;  
                }  
                ptr->data=temp3->data;
                temp3->next = ptr;  
                ptr->next = NULL;  
                cout<<"\nNode inserted"; 

            }
                 

            // if(count==1)
            // {   
            //     cout<<temp->data;
            // }
            // else
            // {   
            //     cout<<temp->data;
            }

            
            temp2=temp2->next;
        }
        temp=temp->next;
    }
    cout<<endl<<"count="<<count;

}

void display3()
{struct node *temp=head3;
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

    insert2(2);
    insert2(4);
    insert2(7);
    insert2(1);
    insert2(6);
    insert2(34);
    
    display();
    cout<<endl<<"The similar data is as follows"<<endl;

    similarity();
   display3();
    return 0;

}