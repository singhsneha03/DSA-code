#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
void make(string s, string output, int i){
    if( i > s.length()){
        cout<<output<<endl;
        return;
    }

    //exclude
    make(s,output,i+1);

    //include
    output=output+s[i]; //output.pushback(str[i])
    make(s,output,i+1);

}
int main()
{
    string a="abc";
    string output=" ";//for storing result in other string (tempo string in which v make ans)
    int i=0;
    make(a,output,i);
    return 0;
}