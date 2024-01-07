#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
#include<unordered_map>
using namespace std;

class dog
{
    //properties
    private:
    int color;

    public:
    char name[100];
    int age;
    int height;
    static int timetocomp;

    int getcolor()
    {
        return color; 
    }

    void setcolor(int c)
    {
        color=c;
    }

    //6.constructor
    dog()
    {
        cout<<"defaultconstructor"<<endl;
    }

    //7.parameterised constructor
    dog(int age)//can pass more than one parameters
    {
        this->age=age;
    }

    //8.copy constructor own
    dog(dog & temp)
    {
        cout<<"copy constructor"<<endl;
        this->color= temp.color;
    }

    //9.static func
    static int random()
    {
        return timetocomp;
    }


};

//static member
int dog::timetocomp=10;

int main()
{
    //1.creation of obj
    dog d1;
    dog d2;

    //2.acess data mem
    cout<<"age is: "<<d2.age<<endl;
    cout<<"size: "<<sizeof(d1)<<endl;

    //3.assign value to data mem
    d2.age=10;
    d1.height=50;

    //4.get and set
    cout<<"color: "<<d1.getcolor()<<endl;
    d1.setcolor(4);
    cout<<"color:"<<d1.getcolor()<<endl;

    //5.dynamically
    dog *d= new dog;
    cout<<"age: "<<(*d).age<<endl;
    cout<<"age: "<<(*d).getcolor()<<endl;
           //or
    d->setcolor(4);
    cout<<"age: "<<d->age<<endl;
    cout<<"age: "<<d->getcolor()<<endl;

    //6.default constructor
    //static
    cout<<"hi"<<endl;
    dog tom;
    cout<<"hello"<<endl;
    //dynamic
    dog *a= new dog;

    //7.parameterised constructor
    dog tam(10);
    cout<<"parameterised constructor"<<endl;
    dog *c=new dog(10);

    //8.copy constructor
    //default
    dog sne(10);
    dog j(sne);

    //9.static member
    cout<<dog::timetocomp<<endl;

    //10.static func
    cout<<dog::random()<<endl;







    return 0;
}