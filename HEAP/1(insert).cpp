#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        size=0;
    }

    //dis func inside class so to access class ke andar func v use dot operator
    void insert(int val){
        //val insert karo end mein
        size=size+1;
        int index=size;
        arr[index]= val;

        //iss value ko sahi position place
        while(index > 1){
            int parentindex= index/2;

            if(arr[index] > arr[parentindex]){
                swap(arr[index] , arr[parentindex]);
                index=parentindex;
            }
            else{
                break;
            }
        }
    }
};

int main()
{
    heap h; //heap class obj
    h.arr[0]=-1;
    h.arr[1]=100;
    h.arr[2]=60;
    h.arr[3]=40;
    h.arr[4]=70;
    h.arr[5]=90;
    h.arr[6]=10;

    int size=7;

    h.insert(110);
    for(int i=0;i<h.size;i++){
        cout<<h.arr[i]<<" ";

    }cout<<endl;

    return 0;
}