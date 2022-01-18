#include<bits/stdc++.h>
using namespace std;

void UniqueElement(int arr[], int n)
{
    int count = 0, i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i] == arr[j] && i != j)
            {
                break;
            }
        }
        if(j == n)
        {
            cout << arr[i] << " ";
            count++;
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

    UniqueElement(arr, n);
    // printArray(arr, n);
    return 0;
}