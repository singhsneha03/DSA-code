#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
void uppercase(char arr[])
{
    int n= strlen(arr);
    for(int i=0; i<n; i++)
    {
        arr[i]= arr[i]-'a'+'A';
    }
}
int main()
{
    char arr[100];
    cin>>arr;
    uppercase(arr);
    cout<<arr<<endl;
    return 0;
}