//Code Link:- https://www.codingninjas.com/codestudio/problem-details/duplicate-in-array_893397

//Solution:-

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
	int ans = 0;
    int n = arr.size();
//     sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    for(int i = 1; i < n; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
