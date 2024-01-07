#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,78};
    int size=7;
    if(binary_search(arr, arr+size, 4))
    {
        cout<<"found";
    }
    else
    {
        cout<<"not found";
    }
    return 0;
}