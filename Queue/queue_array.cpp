#include<iostream>
using namespace std;
#define n 10


class queue{
    public:
    int arr[n];
    int fron,rea;
    queue(){fron=-1;
    rea=-1;}

    void push(int x)
    {
        if(rea==n-1)
        {
            cout<<"overflow";
        }
        rea++;
        arr[rea]=x;
        if(fron==-1)
        fron++;
    }
    void pop()
    {
        if(fron==-1||fron>rea)
        {
            cout<<"list is empty";
            return;
        }
        else{fron++;}
    }

    int peek()
    {
        if(fron==-1||fron>rea)
        {
            cout<<"list is empty";
            return -1;
        }
        else
        return arr[fron];   
    }
};

int main()
{
    queue obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(9);
    obj.push(3);
    obj.push(16);
    obj.pop();
    cout<<obj.peek();

}