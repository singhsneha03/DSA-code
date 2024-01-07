#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
#include<unordered_map>
using namespace std;

//1.Encapsulation
class human
{
    private:
    char name;
    int age;
    int height;


    public:
    int getage()
    {
        return this->age;
    }

    int setage(int a)
    {
        age=a;
    }
};

//2.Inheritance
class male: public human
{
    int weight;

    void talk()
    {
        cout<<"i am a man"<<endl;
    }
};

//3.function overloading
class sne
{
    int age;

    void pretty()
    {
        cout<<"i am pretty"<<endl;
    }

    int pretty(int n)
    {
        return n;
    }

    void pretty(string name)
    {
        cout<<"i am pretty"<<endl;
    }
};

//4.operator overloading

//5.function overriding
class animal
{
    public:
    void speak()
    {
        cout<<"speaking"<<endl;
    }
};

class dedof: public animal
{
    public:
    void speak()
    {
        cout<<"barking"<<endl;
    }
};



int main()
{
    
    
    return 0;
}