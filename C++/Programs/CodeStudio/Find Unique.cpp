#Code Link:- https://www.codingninjas.com/codestudio/problems/find-unique_625159

#Solution:-

int findUnique(int *arr, int size)
{
    //Write your code here
    int ans = 0;
    for(int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}