#include<iostream>
#include<math.h>
using namespace std;

//1
//11
//121
//1331


// this is nothing but ti,j = ncr
 fact(int num)
 {
     int factorial=1;
     for(int i=2;i<=num;i++)
     {
         factorial*=i;


     }
     return factorial;
 }

 int main()
 {
 int r;
 cout<<" to find pascal triangle enter the no of rows "<<endl;

 cin>>r;
 for(int i=0;i<r;i++)
 {
     for(int j=0; j<=i;j++){
             int ans = fact(i)/(fact(j)*fact(i-j)); // ncr= n!/r!*(n-r)!

     cout<<ans<<" ";

     }
     cout<<endl;
 }
 return 0;



 }

