#include<stack>
#include<iostream>

using namespace std;
int prec(char c)
{
    if(c=='^')
    return 3;
    else if(c=='/'||c=='*')
    return 2;
    else if(c=='+'||c=='-')
    return 1;
    else
    return -1;
}

string infix_postfix(string s)
{
    stack<char> st;
    string res;
    int size=s.length();
    for (int i=0;i<size;i++){
        if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
        {
            res+=s[i];
        }
        else if(s[i]=='(')
        {
            st.push(s[i]);              //pushed (
        }
        else if(s[i]==')')      //will be popped till we have (   
        {
            while(!st.empty() && st.top()!='(')
            {res+=st.top();
            st.pop();}
            if(!st.empty())
            {
                st.pop();               //popped (
            }
        }
        else{
            while(!st.empty() && prec(st.top())>s[i])
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();

    }
    return res;
}

int main(){
    cout<<infix_postfix("(a-b/c)*(a/k-l)")<<endl;   
}

