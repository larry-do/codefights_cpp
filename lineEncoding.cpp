std::string lineEncoding(std::string s) {
    std::string a;
    for(int i=0;i<s.length();i++){
        int k=0,n=i;
        for(int j=i;j<=s.length();j++)
            if(s[i]==s[j]) k++;
            else{
                i=j-1;
                break;
            }
        if(k==1) a.push_back(s[n]);
        else{
            a=a+to_string(k);
            a.push_back(s[n]);
        }
    }
    return a;
}
/*
Given a string, return its encoding defined as follows:

First, the string is divided into the least possible number of disjoint substrings consisting of identical characters
for example, "aabbbc" is divided into ["aa", "bbb", "c"]
Next, each substring with length greater than one is replaced with a concatenation of its length and the repeating character
for example, substring "bbb" is replaced by "3b"
Finally, all the new strings are concatenated together in the same order and a new string is returned.
Example

For s = "aabbbc", the output should be
lineEncoding(s) = "2a3bc".
*/
