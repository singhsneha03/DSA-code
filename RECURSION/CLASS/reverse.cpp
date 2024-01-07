#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
void count(int n)
{
    //base cas
    if(n == 0)
    return;

    //processing
    cout<<n<<" ";

    //recursive call
    count(n-1);

}
int main()
{
    int n;
    cout<<"enter the no:"<<endl;
    cin>>n;
    cout<<endl;

    count(n);

    return 0;
}