#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isEven(int n)
{
    // return n % 2 == 0;
    //1->Even
    //0->Odd
    if(n&1)
        return 0;
    else
        return 1;
}

int main()
{
    int n; 
    cin>>n;

    if(isEven(n))
        cout<<"Number is Even";
    else
        cout<<"Number is Odd";
}