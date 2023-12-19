#include<iostream>
using namespace std;
#define n 10
class stack{
    public:
    int arr[n];
    int top=-1;
    
    void push(int x){
    if(top==n-1)
    {
        cout<<"overflow";
    }
    top++;
    arr[top]=x;
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"the list is empty";
            return;
        }
        top--;
    }
    int TOP()
    {if(top==-1)
        {
            cout<<"the list is empty";
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top==-1;
    }
};

int main()
{
    stack obj;
    obj.push(5);
    obj.push(9);
    obj.push(1);
    obj.push(6);
    obj.push(4);
    obj.pop();
    cout<<obj.TOP()<<endl;
    obj.pop();
    obj.pop();
    obj.pop();
    //obj.pop();
    cout<<obj.empty();

}
