#include<bits/stdc++.h>
using namespace std;

int AP(int n, int d, int k)
{
    int ans = ((k *n) + d);
    return ans;
}

int main()
{
    int n, d, k;
    cin >> n >> d >> k;
    cout << AP(n, d, k) << endl;
    return 0;
}