std::string longestDigitsPrefix(std::string s) {
    std::string a;
    if(!isdigit(s[0])) return a;
    for(char c : s)
    {
        if(!isdigit(c))
            break;
        a.push_back(c);
    }
    return a;
}
/*
Given a string, output its longest prefix which contains only digits.

Example

For inputString="123aa1", the output should be
longestDigitsPrefix(inputString) = "123".
*/
