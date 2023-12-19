#include<iostream>
using namespace std;
int main()
{
    int arr[]={12, 11, 13, 5, 6};
    int key,i,j;
    int x=sizeof(arr)/sizeof(arr[0]);
    for(i=1;i<x;i++)
    {   key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];   //value swapped
            j=j-1;              //index of j is decreased
        }
        arr[j+1]=key;
    }
for (int k = 0; k < x; k++) {
    cout << arr[k] << " ";
  }
  cout << endl;
}
