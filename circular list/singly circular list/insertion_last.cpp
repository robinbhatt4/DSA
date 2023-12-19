#include<stdio.h>  
#include<stdlib.h>  
#include<iostream>
using namespace std;
 
struct node  
{  
    int data;  
    struct node *next;  
};  

struct node *head=NULL;  
void lastinsert( int item)  
{  struct node*ptr ,*temp;
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        cout<<"\nOVERFLOW\n";  
    }  
    else  
    {  
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head)  
            {  
                temp = temp -> next;  
            }  
            temp -> next = ptr;   
            ptr -> next = head;  
        }  
    }  
  
} 
void last_delete()  
{  
struct node *ptr, *preptr;    
    if(head==NULL)  
    {  
        cout<<"\nUNDERFLOW\n"; 
    }  
    else if (head ->next == head)  
    {  
        head = NULL;  
        free(head);  
        cout<<"\nNode Deleted\n";  
    }  
    else   
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
        free(ptr);  
        cout<<"\nNode Deleted\n";  
    }  
}  
void display()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        cout<<"\nnothing to print";  
    }     
    else  
    {  
        cout<<"\n printing values ... \n";  
          
        while(ptr -> next != head)  
        {  
          
            cout<<"\n"<<ptr->data;  
            ptr = ptr -> next;  
        }  
        cout<<"\n"<<ptr -> data;  
    }  
              
}  
int main()  
{  
    int choice,item;  
    do   
    {  
        cout<<"\nEnter the item which you want to insert?\n";  
        cin>>item;  
        lastinsert(item);  
        cout<<"\nPress 0 to insert more ?\n";  
        cin>>choice;  
    }while(choice == 0);  
    display();
    last_delete();
    cout<<endl<<"After deletion";
    display();
} 