#include<iostream>
using namespace std;  
int main()
{
    int arr[4];
    int i=0;
    cout<<"Enter the element to be inserted";
    //cin>>num;
    while(i<5)
    {   cin>>arr[i];
        
        i++;
        
    }

    for(int i=0;i<5;i++)
    {cout<<arr[i]<<" ";}
return 0;
}