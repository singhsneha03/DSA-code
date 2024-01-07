#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<int>a={1,1,1,1,};
    int count=0;
    int max=0;
    for(int i=0;i<a.size();i++){
        
        
        for(int j=i+1;j<a.size();j++){
            
            if(a[i]==a[j]){
                max=a[i];
                count++;

            }
            
        }

        }
    
        cout<<max;
    return 0;
}
