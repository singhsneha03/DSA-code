//UNION OF TWO ARR
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int sizearr=5;
    int brr[3]={6,7,8};
    int sizebrr=3;
    vector<int>c;
    for(int i=0; i<sizearr;i++){
        c.push_back(arr[i]);
    }
    for(int i=0; i<sizebrr;i++){
        c.push_back(brr[i]);
    }
    for(int i=0;i<c.size();i++){
        cout<<c[i];
    }
    return 0;
}