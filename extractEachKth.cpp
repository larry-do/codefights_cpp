std::vector<int> extractEachKth(std::vector<int> inputArray, int k) {
    for(int i=k;i<=inputArray.size();i+=k-1)
        inputArray.erase(inputArray.begin()+i-1);
    return inputArray;
}
/*
Given array of integers, remove each kth element from it.

Example

For inputArray = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] and k = 3, the output should be
extractEachKth(inputArray, k) = [1, 2, 4, 5, 7, 8, 10].
*/
