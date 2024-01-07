#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

bool binarysearch(int arr[][4], int row, int col, int target)
{
    int start=0;
    int end=row*col-1;
    int mid= start + (end-start)/2;

    while(start <= end)
    {
        int rowindex=mid/col;
        int colindex= mid%col;
        if(arr[rowindex][colindex] == target)
        {
            cout<<"found at:"<<rowindex<<" "<<colindex<<endl;
            return true;
        }

        if(arr[rowindex][colindex]<target)
        {
            //rs
            start=mid+1;
        }

        if(arr[rowindex][colindex]>target)
        {
            //ls
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return false;

}
int main()
{
    int arr[5][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int row=5;
    int col=4;
    int target =5;

    bool ans= binarysearch(arr,row,col,target);

    if(ans)
    {
        cout<<"found";
    }
    else
    {
        cout<<"not found";
    }
    return 0;
}