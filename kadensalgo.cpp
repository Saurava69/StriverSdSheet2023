//code studio
#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long max_sum=INT_MIN;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        max_sum=max(max_sum,sum);
        if(sum<0)
        {
            sum=0;
        }
        
    }
    return (max_sum>=0)?max_sum:0;
}
//leetcode
class Solution {
public:
    int maxSubArray(vector<int>& arr) {
    int max_sum=INT_MIN;
    int sum=0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        max_sum=max(max_sum,sum);
        if(sum<0)
        {
            sum=0;
        }
        
    }
    return max_sum;
    }
};
