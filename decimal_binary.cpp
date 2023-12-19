#include <iostream>
using namespace std;
int main()
{ int num, rem[32],i=0;
  cout<<"Enter the number- ";
  cin>>num;
  
  while(num)
{ rem[i]=num%2;
    num=num/2;
    ++i;
    
  }
  for(int j=j-1;j>=0;j--) //j=i-1 since we are giving the address of the last array that is 3 not 4
  {
    cout<<rem[j];
  }
  cout<<endl<<sizeof(rem)/sizeof(rem[0]);
return 0;
}