std::string longestWord(std::string text) {
    std::string ans, tmp;
    text.push_back('-');
    for(char c:text)
        if(isalpha(c))
            tmp.push_back(c);
        else
        {
            if(tmp.size()>ans.size())
                ans = tmp;
            tmp.clear();
        }
    return ans;
}
/*
Define a word as a sequence of consecutive English letters. Find the longest word from the given string.

Example

For text = "Ready, steady, go!", the output should be
longestWord(text) = "steady".
*/
