#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<string.h>
using namespace std;

int partition(int a[],int start,int end)
{
    //1-choose pivot element
    int pivotIndex=start;
    int pivot=a[start];

     //2-find right position for pivot element
     int count=0;
     for(int i=start+1;i<end;i++)
     {
        if(a[i]<=pivot){
            count++;
        }
     }
     //when i come out of d loop i have corr position (index) of pivot element
     int corrIndex=start+count;
     swap(a[pivotIndex],a[corrIndex]);
     pivotIndex=corrIndex;

     //3-now check small n bif from pivot
     int i=start;
     int j=end;
     while(i<pivotIndex && j>pivotIndex)
     {
        while(a[i]<=pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }

        //2 case aft dis
        //all sorted in left small n big in right
        //swap coz of incorrect position
        if(i<pivotIndex && j>pivotIndex){
            swap(a[i],a[j]);
        }
     }
     return pivotIndex;
}
void quicksort(int a[],int start,int end)
{
    if(start>=end)
    return;
    
    //partition logic
    int p=partition(a,start,end);
    //recursive logic
    quicksort(a,start,p-1); //left call
    quicksort(a,p+1,end);
}
int main()
{
    int a[]={8,1,3,4,20,50,30};
    int n=7;
    int start =0;
    int end=n-1;
    quicksort(a,start,end);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}