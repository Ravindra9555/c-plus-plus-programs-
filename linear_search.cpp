
#include<iostream>
#include<string>
using namespace std;
int main()
 {
     int arr[10],i,loc;
     int key,n;

    cout<<"how many no u want to enter\n";
    cin>>n;
     cout<<"enter the array \n";
     for(i=0;i<n;i++)
     {
         cin>>arr[i];

     }
     cout<<"the entered array is  "<<endl;
     for(i=0;i<n;i++)
     {
         cout<<arr[i]<<"  ";

     }
     cout<<endl;
     cout<<"enter the element which u want to search in the array"<<endl;
     cin>>key;
     for(i=0;i<n;i++)
     {
         if(arr[i]==key)
         {
        loc=i+1;
        break;
         }
         else
         {
            loc=0;

         }

     }
     if(loc!=0)
     {
         cout<<"array is found at position  "<<loc<<"  in the array"<<endl;


     }

     else
     {

         cout<<"element is not present in the array"<<endl;
     }
 }
