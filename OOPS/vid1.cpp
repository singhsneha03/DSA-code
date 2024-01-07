#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;
class Animal{
    private:
    int weight;
    //1.properties
    public:  //(yana se niche class end tak its public. if we add private anywhere frm there it becomes pvt)
    int age;
    string name;


    //constructor 
    Animal(){
        this->weight=0;
        this->age=0;
        this->name="";
        cout<<"called"<<endl;

    }

    Animal(int age){
        this->age=age;
        cout<<"para"<<endl;
    }
    ~Animal(){
        cout<<"dest"<<endl;
    }
    //2.behaviour
    void eat(){
        cout<<"eating"<<endl;

    }
    void sleep(){
        cout<<"sleeping"<<endl;

    }
    int getweight(){
        return weight;
    }

    void setweight(int weight){
        this->weight =weight;
    }

    

};
int main()
{
    //1.obj creation

    //1.1static
    Animal ramesh; //first obj created name ramesh
    //insert
    ramesh.age=25;
    ramesh.name="lion";

    
    cout<<ramesh.age<<endl;
    cout<<ramesh.name<<endl;

    //calling class fun
    ramesh.eat();
    ramesh.sleep();

    //pvt mem acess
    ramesh.setweight(120); 
    cout<<ramesh.getweight()<<endl;

   


    //1.2dynamic
    Animal *suresh= new Animal; //add-*suresh
    (*suresh).age=24;//*suresh = actual obj
    (*suresh).name="tiger";

    //alternat
    suresh->age=17;
    suresh->name="tiger";

    suresh->eat();
    suresh->sleep();

    return 0;
}