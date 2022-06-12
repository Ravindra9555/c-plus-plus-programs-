#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;
bool isprime(int num)
{
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % 2 == 0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    
}
int main()
{
    int a=0,b=0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isprime(i))
        {
            cout << i << endl;
        }
    }

return 0;
}
