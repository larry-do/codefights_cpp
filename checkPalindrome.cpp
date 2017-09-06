bool checkPalindrome(std::string a) {
    std::string b = a;
    std::reverse(b.begin(),b.end());
    return a == b;
}
bool checkPalindrome(std::string inputString) {
    if (inputString.size() < 2)
        return true;
    if (inputString[0] != inputString.back())
        return false;
    return checkPalindrome(inputString.substr(1, inputString.size() - 2));
}
/*
Given the string, check if it is a palindrome.

Example

For inputString = "aabaa", the output should be
checkPalindrome(inputString) = true;
For inputString = "abac", the output should be
checkPalindrome(inputString) = false;
For inputString = "a", the output should be
checkPalindrome(inputString) = true.
*/
