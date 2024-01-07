#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
using namespace std;
int main()
{
    //CREATION
    stack<int> st;

    //INSERTION
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    //REMOVE
    st.pop();
    //ELEMENT ON TOP
    cout<<st.top()<<endl;

    //SIZE
   cout<<st.size()<<endl;

    if(st.empty()){
        cout<<"empty";
    }
    else{
        cout<<"not";
    }

    //PRINTING
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(5);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;


    return 0;
}