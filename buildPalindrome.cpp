std::string buildPalindrome(std::string st) {
    if(checkPalindrome(st)) return st;
    for(int i=0;i<st.length();i++){
        st.insert(st.end()-i,st[i]);
        if(checkPalindrome(st)) return st;
    }
}
bool checkPalindrome(std::string inputString) {
    if (inputString.size() < 2)
        return true;
    if (inputString[0] != inputString.back())
        return false;
    return checkPalindrome(inputString.substr(1, inputString.size() - 2));
}
/*
Given a string, find the shortest possible string which can be achieved by adding characters to the end of initial string to make it a palindrome.

Example

For st = "abcdc", the output should be
buildPalindrome(st) = "abcdcba".
*/
