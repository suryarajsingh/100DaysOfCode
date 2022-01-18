#include<bits/stdc++.h>
using namespace std;

void CountingNumber(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    CountingNumber(n);
    return 0;
}