#include<stdlib.h>
#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
struct node2{
    int dat;
     node2* nex;
};
 

struct node *head=NULL;
struct node2 *head2=NULL;

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
{   struct node2 *pt = (struct node2*)malloc(sizeof(struct node2));     
    struct node2 *temp; 
    pt->dat = item;  
            if(head2 == NULL)  
            {  
                pt -> nex = NULL;  
                head2 = pt;  
                cout<<"\nNode inserted";  
            }  
            else  
            {  
                temp = head2;  
                while (temp -> nex != NULL)  
                {  
                    temp = temp -> nex;  
                }  
                temp->nex = pt;  
                pt->nex = NULL;  
                cout<<"\nNode inserted";  

}
}


bool comparison()
{
    struct node *temp=head;
    struct node2 *temp2=head2;

    while(temp->next!=NULL || temp2->nex!=NULL)
    {  
        if(!temp||!temp2)
        return false;
        else if(temp->data !=temp2->dat)
        return false;
        
        temp=temp->next;
        temp2=temp2->nex;

    }
return true;
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
    struct node2 *temp;
    temp=head2;
    while(temp!=0)
    {cout<<temp->dat<<" ";
    temp=temp->nex;
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
    insert2(19);
    insert2(56);
    insert2(34);

    cout<<endl<<"The first list is as follows-> "<<endl;
    display();
    cout<<endl;
    cout<<"The Second list is as follows-> "<<endl;
    display2();
    cout<<endl;
    cout<<"Compared data is "<<comparison();
    
   
    return 0;

}