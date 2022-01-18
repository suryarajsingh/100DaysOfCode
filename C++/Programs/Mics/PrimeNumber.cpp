#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if(isPrime(n))
        cout << "Prime Number";
    else
        cout << "Not a Prime Number";
    return 0;
}