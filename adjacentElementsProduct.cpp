int adjacentElementsProduct(std::vector<int> inputArray)
{
    int product=inputArray[0]*inputArray[1];
    for(int i=0;i<inputArray.size()-1;i++)
    {
        int temp=inputArray[i]*inputArray[i+1];
        (temp>product)?(product=temp):0;
    }
    return product;
}
int adjacentElementsProduct(std::vector<int> inputArray) {
    int ans = -987654321;
    for (int i = 1; i < inputArray.size(); ++i)
        ans = max(ans, inputArray[i] * inputArray[i - 1]);
    return ans;
}
/*
Given an array of integers, find the pair of adjacent elements that has the largest product and return that product.

Example

For inputArray = [3, 6, -2, -5, 7, 3], the output should be
adjacentElementsProduct(inputArray) = 21.

7 and 3 produce the largest product.
*/
