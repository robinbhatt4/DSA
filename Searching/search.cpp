#include<iostream>
using namespace std;  
int main()
{
    int arr[4]={56,44,98,12};
    int i=0,num;
    for(int i=0;i<4;i++)
    {cout<<arr[i]<<" ";}
    cout<<endl<<"Enter the element to be searched- ";
    cin>>num;
    for(i=0;i<5;i++)
    {
        if(arr[i]==num)
        cout<<arr[i]<<" position- "<<i+1;
    }

    
return 0;
}