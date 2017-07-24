bool checkPalindrome(std::string inputString) {
    std::string b,c;
    b.assign(inputString,0,inputString.length()/2);
    c.assign(inputString,(inputString.length()%2==0)?(inputString.length()/2):(inputString.length()/2+1),(inputString.length()/2));
    int n=c.length();
    for(int i=0;i<n/2;i++)
        swap(c[i],c[n-i-1]);
    return b.compare(c)?false:true;
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
