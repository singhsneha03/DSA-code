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
    vector<int> v{2,5,3,7,9,8};
    sort(v.begin(), v.end());

    for(auto i:v){
            cout<< v <<endl;
    }
    cout<<endl;
    return 0;
}