#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
bool compare(char first, char second)
{
    return first>second;
}
int main()
{
    //string
    string s= "sneha";
    sort(s.begin(), s.end(),compare);
    cout<<s;

    //arr
    vector<int> a{2,5,3,7,9,8};
    sort(a.begin(), a.end());

    for(auto i:a){
            cout<< a <<endl;
    }
    cout<<endl;
    return 0;
}