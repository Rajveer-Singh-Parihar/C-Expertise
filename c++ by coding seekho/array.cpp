//ARRAY IS  COLLECTION OF SIMILAR TYPE OF DATA ITEM.( values are stored in contigueous memory location).
// we can access array through there index . base index of array is zero.
// Array is used to store multiple values in the single variable.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0; i<n; i++){
    cin>>arr[i];
 }
 
 int maxNo = INT_MIN;
 int minNo = INT_MAX;
 for(int i=0; i<n; i++){
    if(arr[i]>maxNo){
        maxNo = arr[i];
    }
    if(arr[i]>minNo){
        minNo = arr[i];
    }

 }

 cout<<maxNo<<" "<<minNo;
    return 0;
}