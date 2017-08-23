//mấy pro kinh khủng quá
int deleteDigit(int n) {
    int ans = 0;
    for(int d=1;d <= n; d*=10){
        int tmp = n%d + ((n/d)/10)*d;
        ans = max(ans,tmp);
    }
    return ans;
}
/*
Given some integer, find the maximal number you can obtain by deleting exactly one digit of the given number.

Example

For n = 152, the output should be
deleteDigit(n) = 52;
For n = 1001, the output should be
deleteDigit(n) = 101.
*/
