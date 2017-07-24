int differentSymbolsNaive(std::string s) {
    return std::set<char>(s.begin(), s.end()).size();
}
//
int differentSymbolsNaive(std::string s) {
    for(int i=0;i<s.length()-1;i++)
        for(int j=i+1;j<s.length();j++)
            if(s[i]==s[j])
                s.erase(j);
    return s.length();
}
/*
Given a string, find the number of different characters in it.

Example

For s = "cabca", the output should be
differentSymbolsNaive(s) = 3.

There are 3 different characters a, b and c.
*/
