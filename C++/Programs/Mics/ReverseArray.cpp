#include<bits/stdc++.h>
using namespace std;

void printReverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while(start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void duplicate(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == arr[i+1])
        {
            cout << arr[i] << " " << endl;;
        }
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

    // printArray(arr, n);
    printReverseArray(arr, n);
    duplicate(arr, n);
    printArray(arr, n);

    return 0;

}