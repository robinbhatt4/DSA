#include<iostream>
using namespace std;
int main()
{
    int arr[6]={10,32,78,12,45,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int largest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<largest;
}