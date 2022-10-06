#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int choti=factorial(n-1);
    int badi = n*choti;
    return badi;

}
int main(){
    int n;
    cin>>n;
   int num= factorial(n);
   cout<<"factorial of no is "<<num<<endl;
   return 0;
}
