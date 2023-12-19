#include<limits.h>
#include<iostream>
using namespace std;
int divide(int dividend, int divisor) {
       int count=0;
        // int bottom=INT_MIN/10;
        // int top=INT_MAX/10;
      
      while(dividend!=0)
              { 
                //{   if(dividend<bottom)
                dividend=dividend-divisor;
                 count++;
                 if(dividend==1)
                break;
                
    }
return count;
}
int main()
{
    int a ,b ;
    a=73;
    b=12;
    cout<<divide(a,b);
}