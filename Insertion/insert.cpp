#include<iostream>
using namespace std; 
int n=100; 
int main()
{
    int arr[n]={3,2,1,8,11};
    int pos,i,num;
   // int g=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number and position- ";
    cin>>num>>pos;
    pos-=1;
    for(i=n;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    
    arr[pos]=num;
     for(i=0;i<6;i++)
    {
       cout<<arr[i]<<" ";
    }
    
return 0;
}