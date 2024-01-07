#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
int getlen(char name [])
{
    int length=0;
    int i=0;
    while(name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
int main()
{
    char name[50];
    cout<<" enter d name"<<endl;
   cin.getline(name,50);
    int ans= getlen(name);
    cout<<ans;

    return 0;
}