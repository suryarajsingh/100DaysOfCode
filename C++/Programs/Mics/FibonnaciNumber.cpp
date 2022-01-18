#include<bits/stdc++.h>
using namespace std;

int Fibonacci(int n)
{
    if(n==0)
        return 0;
        else if(n==1)
            return 1;
        else
            return Fibonacci(n-1) + Fibonacci(n-2);
}

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<=n; i++)
    {
        cout << Fibonacci(i) << " ";
    }
    // cout << "Fibonacci series:" << Fibonacci(n);
    return 0;
}