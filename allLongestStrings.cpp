std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray)
{
    std::vector<std::string> outputArray;
    int maxLength=0;
    for(int i=0;i<inputArray.size();i++)
        if(inputArray[i].length()>=maxLength)
            maxLength=inputArray[i].length();
    for(int i=0;i<inputArray.size();i++)
        if(inputArray[i].length()==maxLength)
            outputArray.push_back(inputArray[i]);
   return outputArray;
}
/*
Given an array of strings, return another array containing all of its longest strings.

Example

For inputArray = ["aba", "aa", "ad", "vcd", "aba"], the output should be
allLongestStrings(inputArray) = ["aba", "vcd", "aba"].
*/
