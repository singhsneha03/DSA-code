#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int binarysearch(int arr[],int size,int search)
{
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==search)
        {
            return mid;
        }
        if(search< arr[mid])
        {
            //left search
            end=mid-1;
        }
        else
        {
            //right search
            start=mid+1;
        }
        mid= start + (end-start)/2;
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int search=6;
    int size=9;

    int indexofsearch = binarysearch(arr,size,search);
    if(indexofsearch == -1)
    {
        cout<<"not found";
    }
    else
    {
        cout<<"found at"<<indexofsearch<<endl;
    }
    return 0;
}