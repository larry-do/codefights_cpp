int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {
    int m=0;
    for(int i=0;i<inputArray.size()-1;i++)
    {
        m=max(m,abs(inputArray[i]-inputArray[i+1]));
    }
    return m;
}
/*
Given an array of integers, find the maximal absolute difference between any two of its adjacent elements.

Example

For inputArray = [2, 4, 1, 0], the output should be
arrayMaximalAdjacentDifference(inputArray) = 3.
*/
