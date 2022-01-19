//Code Link:- https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028

//Solution:-

#include<iostream>
using namespace std;

int main()
{
    int a=5, b=6, c=7;
    if(a<b || c>b)
    {
        cout<<"No Triplet Exists";
    }
    else
    {
        cout<< "Triplet Exists";
    }
    return 0;
}