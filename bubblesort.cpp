#include<iostream>
using namespace std;
int main()
{
    int i,j,k,temp,arr[10];
    cout<<"enter the number which you want to sort";
    cout<<endl;

    cin>>k;
    cout<<"you want to sort "<<k<<" number";
    cout<<endl;
    cout<<"enter the number \n";

for(i+0;i<k;i++)
{
    cin>>arr[i];
}
cout<<"number you have entered is";
cout<<endl;
for(i=0;i<k;i++)
{
cout<<arr[i]<<endl;
}

for(i=0;i<k;i++)
{
  for(j=i+1;j<k;j++)
  {
      if(arr[j]<arr[i])
      {
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;

      }

  }

  }
for(i+0;i<k;i++)
{
    cin>>arr[i];
}

return 0;

}
