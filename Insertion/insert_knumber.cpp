#include<iostream>
using namespace std;
int n=100;
int main(){
int arr[100],i,k;
cout<<"Enter the number of elements you want to insert- "<<endl;
cin>>k;
cout<<"Enter the elements- ";
for(i=0;i<k;i++)
{   cout<<i+1<<". ";
    cin>>arr[i];
}
cout<<"The array is as follows-> ";
for(i=0;i<k;i++)
{
    cout<<arr[i]<<" ";
}
}