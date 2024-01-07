#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
void removeDuplicates(string s) {
string ans= "";
int i=0;

while(i<s.length())
    {
    // greater than 0 so koi na koi char pade hai
    if( if(ans.length() >0) && ans[ans.length()-1] == s[i])
        {
            ans.pop_back();
                }
                else
                {
                    ans.push_back(s[i]);
                }
            }
            i++;
        }
        return ans;
}
int main()
{
    return 0;
}