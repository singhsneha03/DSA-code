#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
#include<unordered_map>
using namespace std;
int main()
{
    //1.creation
    unordered_map<string,int> a;

    //2.insertion - 3 ways
    pair<string,int> b=make_pair("scorppio",9);
    a.insert(b);

    pair<string,int>b1("sneha",2);
    a.insert(b1);

    a["akshay"]=3;





    //3.access
    cout<<a.at("sneha")<<endl;

    cout<<a["sneha"]<<endl;


    //4.search
    cout<<a.count("sneha")<<endl;
    cout<<a.count("sri")<<endl;

    if(a.find("sneha") != a.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    //5.size
    cout<<a.size()<<endl;

    //6.print
    cout<<"printing all entries"<<endl;

    for(auto i:a){
        cout<<i.first<<"->"<<i.second<<endl;
    }
    
    return 0;
}