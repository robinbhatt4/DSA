#include<iostream>
using namespace std;
int main()
{
    int num,base=1,decimal=0,rem;
    cout<<"Enter the number- ";
    cin>>num;
    while(num)
    {
        rem=num%10;
        num/=10;
        decimal+=rem*base;
        base*=2;
    }
    cout<<decimal;
    return 0;
}