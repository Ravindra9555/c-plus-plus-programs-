#include<iostream>
#include<math.h>
using namespace std;

 fact(int num)
{
    int factorial=1;
    for(int i=2;i<=num;i++)

{
    factorial=factorial*i;

}
return factorial;
}
 int main()
 {
int a;
cin>>a;

int ans = fact(a);
cout<<ans;
return 0;


 }
