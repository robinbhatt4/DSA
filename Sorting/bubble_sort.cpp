//average and worst case time complexity is very high 
//works by repeatedly swapping adjacent elements if they are in wrong order

#include <iostream>
using namespace std;
void bubble_sort(int arr[],int size)
{ int i,j,temp;
    for(i=0;i<size;i++){
    for( j=i+1;j<size;j++)
    {
        if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}

}
int main()
{   int arr[5]={43,12,90,22,67};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,size);
    cout<<"The sorted array is as follows- ";
   for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}