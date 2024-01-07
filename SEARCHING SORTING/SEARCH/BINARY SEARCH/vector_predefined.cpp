#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> a{1,2,3,4,5,6,7,8,9};
    if(binary_search(a.begin(),a.end(),5))
    {
        cout<<"found";
    }
    else{
        cout<<"not found";
    }

}