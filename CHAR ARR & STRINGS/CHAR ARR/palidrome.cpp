//if we read l-r n r-l same (eg. noon)
#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
bool palidrome(char word[])
{
    int i=0;
    int n= strlen(word);
    int j=n-1;

    while(i<=j){
        if(word[i] != word[j])
        {
            return false;
        }
        else{
            i++;
            j--;

        }
    }
    return true;
}
int main()
{
    char word[10];
    cin.getline(word,10);
    palidrome(word);
    cout<<palidrome(word);

    return 0;
}