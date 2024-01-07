#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;

void merge(int *a, int start, int end)
{
    int mid = start + (end - start)/2;

    int len1 = mid - start +1 ;
    int len2 = end - mid;

    //assume to create arr for len 1 n len 2
    int *left = new int[len1];
    int *right = new int[len2];

    //copy values
    int k = start;
    for(int i = 0; i < len1; i++)
    {
        left[i] = a[k];
        k++;
    }

    k = mid + 1;
    for(int i = 0; i < len2; i++)
    {
        right[i] = a[k];
        k++;
    }

    //merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArray = start;

    while(leftIndex < len1 && rightIndex < len2)
    {
        if(left[leftIndex] < right[rightIndex])
        {
            a[mainArray++] = left[leftIndex++];
        }
        else
        {
            a[mainArray++] = right[rightIndex++];
        }
    }
    //copy logic for left array
    while (leftIndex<len1)
    {
        a[mainArray++] = left[leftIndex++];
    }

    //copy logic for right array
    while(rightIndex < len2)
    {
        a[mainArray++] = right[rightIndex++];
    }
    //TODO:del left and right wala nwely create array

    delete[] left;
    delete[] right;

}
void mergesort(int *a, int start,int end)
{
    //basecase (s==e-single element, s>e-invalid arr)
    if(start >= end)
        return;

    int mid = start + (end - start) / 2;
    //left part sort
    mergesort(a, start, mid);
    //right part sort
    mergesort(a, mid + 1, end);

    //now merge
    merge(a, start, end);
    
}
int main()
{
    int a[]={4,5,13,2,12};
    int n = 5;
    int start = 0;
    int end = n-1;
    mergesort(a, start, end);
    for(int i=0; i < 5; i++)
    {
        cout<< a[i] <<" ";
    }
    return 0;
}