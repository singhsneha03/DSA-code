#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
class Animal{
    private:
    int age;
    int weight;
    public:
    void eat(){
        cout<<"eat"<<endl;
    }
    int getage(){
        return this->age;
    }
    void setage(int age){
        this->age=age;
    }

};
int main()
{

    return 0;
}