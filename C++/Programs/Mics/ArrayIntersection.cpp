#include<bits/stdc++.h>
using namespace std;

void ArrayIntersection(int arr[], int brr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i]==brr[j])
            {
                cout<<arr[i]<<" ";
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100], brr[100], n;
    cin >> n;
    cout << "Enter the array elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the second array elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> brr[i];
    }

    ArrayIntersection(arr, brr, n);
    // printArray(arr, n);
    return 0;
}