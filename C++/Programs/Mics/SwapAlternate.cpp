#include<bits/stdc++.h>
using namespace std;

void alternateSwap(int arr[], int n)
{
    for(int i=0; i<n; i+=2)
    {
        if(i+1 < n)
        {
            swap(arr[i], arr[i+1]);
        }
        // swap(arr[i], arr[i+1]);
    }
}

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[100], n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    alternateSwap(arr, n);
    printArray(arr, n);
    
    return 0;
}