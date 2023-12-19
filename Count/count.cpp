#include<iostream>
using namespace std;  
int main()
{
    int arr[10]={56,56,44,44,44,98,12,12,12,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0,count=0,num;
    for(i=0;i<n;i++)
    { cout<<arr[i]<<" ";
    }
    cout<<endl<<"Enter the number - ";
    cin>>num;
    for(i=0;i<n;i++)
    {  if(num==arr[i])
        count++;
    }
    cout<<"The occurence of the "<<num<<" is "<<count;
return 0;
}