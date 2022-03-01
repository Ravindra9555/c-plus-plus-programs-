#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
 int main(void){
     int n;
     cout<<"how many no  want to sort using binary search"<<endl;
     cin>>n;
     int arr[n];
     for(int i=0; i<n;i++)
        {
            cin>>arr[i];

        }
    int key ;
    cout<<"enter the no which u want to search  "<<endl;
    cin>>key;
    int result = binarySearch(arr, n, key);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
    return 0;

 }




    // Binary Search in C++

int binarySearch(int arr[], int n, int key) {
    int low=0; int high=n;
  if (high >= low) {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    
 if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        low=mid-1; 
           }
        else{
            high=mid+1;
        }
    // Search the right half
  }

  return -1;
}