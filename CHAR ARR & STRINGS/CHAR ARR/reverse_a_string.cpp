#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
void reverse(char name[])
{
    int i=0;
    int n= strlen(name);
    int j=n-1;

    while(i<=j)
    {
        swap(name[i],name[j]);
        i++;
        j--;
    }
}

int main()
{
    char name[50];
    cout<<"enter the name: "<<endl;
    cin.getline(name,50);
    reverse(name);
    cout<<"reverse is: "<<name;
    return 0;
}