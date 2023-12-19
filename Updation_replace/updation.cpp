#include<iostream>
using namespace std;  
int main()
{
    int arr[100]={3,2,1,8,11};
    int pos,i,num;
    cout<<"Enter the position and the value to be updated- ";
    cin>>pos>>num;
    for(i=0;i<=4;i++)
    {   if(i==pos)
        arr[i]=num;
        
    }
    for(i=0;i<=4;i++)
    {
       cout<<arr[i]<<" ";
    }
    
return 0;
}