#include <iostream>
using namespace std;
typedef int v;
int main()
{
    v n1, n2, max;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    
    // maximum value between n1 and n2 is stored in max
    if(n1>n2)
    max=n1;
    else
    max=n2;

    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        else
            max=max+1;
    } while (true);
    
    return 0;
}