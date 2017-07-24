//làm như thế này mới đảm bảo thời gian chạy
int arrayMaxConsecutiveSum(std::vector<int> arr, int k) {
    int max=0;
    for(int i=0;i<k;i++)
        max+=arr[i];
    int sum=max;
    for(int i=1;i<=arr.size()-k;i++)
    {
        sum=sum+arr[i+k-1]-arr[i-1];
        cout<<sum<<' ';
        if(sum>max) max=sum;
    }
    return max;
}
/*
Given array of integers, find the maximal possible sum of some of its k consecutive elements.

Example

For inputArray = [2, 3, 5, 1, 6] and k = 2, the output should be
arrayMaxConsecutiveSum(inputArray, k) = 8.
All possible sums of 2 consecutive elements are:

2 + 3 = 5;
3 + 5 = 8;
5 + 1 = 6;
1 + 6 = 7.
Thus, the answer is 8.
*/
