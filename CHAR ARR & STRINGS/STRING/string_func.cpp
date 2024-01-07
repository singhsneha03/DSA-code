#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
bool compare(string a, string b)
{
    if(a.length() != b.length())
    {
        return false;
    }
    else{

        for(int i=0; i<a.length(); i++)
        {
            if(a[i] != b[i])
            {
            return false;
            }
            
        }
    }
    return true;
}
int main()
{
    string a;
    cin>>a;
    //getline(cin,a);

    //length
    cout<<a.length()<<endl;

    //empty
    cout<<a.empty()<<endl;

    //insert
    a.push_back('s');
    cout<<a<<endl;

    //del
    a.pop_back();
    cout<<a<<endl;

    //substring
    cout<<a.substr(0,3)<<endl;

    //compare
    string a="sneha";
    string b="singh";
    if(a.compare(b) == 0){
        cout<<"equal";
    }
    else{
        cout<<"not equal";
    }

    //find
    string a="sneha is the best";
    string target=" best";
    cout<<a.find(target);

    //replace
    string a= "sneha is the best";
    string word= "akshay";
    a.replace(0,4,word); //(frm where to start, how  many char remove, word to replace)
    cout<<a;

    //erase
    string a= "abcdefghijklmnop"; 
    a.erase(0,4); //(start, no of char to remove frm start)
    cout<<a;

    return 0;
}