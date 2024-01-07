#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main()
{
    char name[10];
    cin>>name;

    for(int i =0; i<5;i++)
    {
        cout<<"index:"<<i<<"value:"<<name[i]<<endl;
    }

    int value= int (name[5]);
    cout<<"value is "<<value;
    return 0;
}