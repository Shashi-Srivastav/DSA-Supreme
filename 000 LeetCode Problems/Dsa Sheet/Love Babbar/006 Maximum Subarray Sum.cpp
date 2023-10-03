long long maxSubarraySum(vector<int> arr, int n)
{
    long maxSum = 0;
    long sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum+arr[i];
        if(sum < 0) sum = 0;//reset
        if(sum > maxSum){
            maxSum = sum;
        }
    }
    return max(maxSum,sum);
}