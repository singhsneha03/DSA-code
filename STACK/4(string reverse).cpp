#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
using namespace std;
int main()
{
    string s= "sneha";
    stack<char> st;

    for(int i=0; i<s.length(); i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }

    return 0;
}