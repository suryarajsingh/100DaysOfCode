#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}

int nCr(int n, int r)
{
    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}

int main()
{
    int n, r;
    cin>>n>>r;
    cout<< "Answer is: " << nCr(n,r) << endl;
}