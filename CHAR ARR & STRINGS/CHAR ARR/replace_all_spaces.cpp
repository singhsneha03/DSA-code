//space ke place pe @
#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
void replace(char sent[])
{
    int i=0;
    int n= strlen(sent);
    for(int i=0; i<n; i++)
    {
        if(sent[i] == ' ')
        {
            sent[i]= '@';
        }
    }
}
int main()
{
    char sent[100];
    cin.getline(sent,100);
    replace(sent);
    cout<<sent;
    return 0;
}