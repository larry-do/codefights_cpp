std::vector<std::vector<int>> spiralNumbers(int n) {
    vector<vector<int>> ans(n,vector<int>(n));
    int cur = 1;
    for(int c = 0; c < (n+1)/2; ++c)
    {
        for(int i = c; i < n-c-1; ++i) ans[c][i] = cur++;
        for(int i = c; i < n-c-1; ++i) ans[i][n-c-1] = cur++;
        for(int i = n-c-1; i > c; --i) ans[n-c-1][i] = cur++;
        for(int i = n-c-1; i > c; --i) ans[i][c] = cur++;
    }
    if(n&1) ans[n/2][n/2] = n*n;
    return ans;
}
/*
Construct a square matrix with a size N × N containing integers from 1 to N * N in a spiral order, starting from top-left and in clockwise direction.

Example

For n = 3, the output should be

spiralNumbers(n) = [[1, 2, 3],
                    [8, 9, 4],
                    [7, 6, 5]]
*/
