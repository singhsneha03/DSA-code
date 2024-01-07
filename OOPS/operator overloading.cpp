
#include <iostream>
using namespace std;

class area
{
    public:
    int h,l;
    
    area()
    {
    
    }
    
    area(int x, int y)
    {
        h=x;
        l=y;
    }
    
    area operator+(area &z)
    {
        area temp;
        temp.h=h-z.h;
        temp.l=l-z.l;
        return temp;
    }
};

int main()
{
    area b1(10,20);
    area b2(30,40);
    area b3= b1+b2;
    
    
    cout<<b3.h<<" "<<b3.l;

    return 0;
}


#include <iostream>
using namespace std;

class area
{
    public:
    int h,l;
    
    area()
    {
    
    }
    
    area(int x, int y)
    {
        h=x;
        l=y;
    }
    
    friend area operator + (area,area);
    
    
};

area operator + (area obj1, area obj2)
    {
        area temp;
        temp.h=obj1.h+ obj2.h;
        temp.l=obj1.l+obj2.l;
        return temp;
    }

int main()
{
    area b1(10,20);
    area b2(30,40);
    area b3= b1+b2;
    
    
    cout<<b3.h<<" "<<b3.l;

    return 0;
}  
