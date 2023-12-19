#include<iostream>
using namespace std;
int main()
{
    int rem,num;
    char ch;
    string hexa="";
    cout<<"Enter a binary number";
    cin>>num;
    while(num)
    {
        rem=num%16;
        num/=16;
        if(rem>9)
        {  ch=rem+55;
           cout<<ch;
        }
        else{
        cout<<rem;}
    }
    
    
}