#include<iostream>
using namespace std;  
int main()
{
    int arr[100]={3,2,1,8,11};
    int pos,i;
    cout<<"Enter the position to be deleted- ";
    cin>>pos;
    for(i=0;i<=4;i++)
    {   if(i==pos)
        arr[i]=arr[i+1];
        
    }
    for(i=0;i<=3;i++)
    {
       cout<<arr[i]<<" ";
    }
    
return 0;
}