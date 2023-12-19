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
void beg_insert(int item)    
{    
        
    struct node *ptr = (struct node *)malloc(sizeof(struct node));    
    struct node *temp;  
    if(ptr == NULL)    
    {    
        cout<<"\nOVERFLOW";    
    }    
    else     
    {    
        ptr -> data = item;    
        if(head == NULL)    
        {    
            head = ptr;    
            ptr -> next = head;    
        }    
        else     
        {       
            temp = head;    
            while(temp->next != head)    
                temp = temp->next;    
            ptr->next = head;     
            temp -> next = ptr;     
            head = ptr;    
        }     
    cout<<"\nNode Inserted\n";  
    }    
                
}  
void beg_delete()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        cout<<"\nUNDERFLOW\n";      
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        cout<<"\nNode Deleted\n";   
    }  
      
    else  
    {     
        ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        cout<<"\nNode Deleted\n";   
    }  
}  


int searchnode(int target)
{
if (head == NULL)
{
cout << "Circular list is empty." << endl;
return -1;
}
Node *temp = head;
int count = 1;
do
{
if (temp->data == target)
{
return count;
}
temp = temp->next;
count++;
} while (temp != head);
return -1; 
}


int findminimum()
{
if (head == NULL)
{
cout << "Circular list is empty." << endl;
return -1;
}
Node *temp = head;
int minVal = temp->data;
do
{
if (temp->data < minVal)
{
minVal = temp->data;
}
temp = temp->next;
} while (temp != head);
return minVal;
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
        beg_insert(item);  
        cout<<"\nPress 0 to insert more ?\n";  
        cin>>choice;  
    }while(choice == 0);  
    display();
    beg_delete();
    cout<<endl<<"After deletion";
    display();
    findminimum();
    searchnode();
    return 0;
}  
 