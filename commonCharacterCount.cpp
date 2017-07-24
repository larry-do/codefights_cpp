int commonCharacterCount(std::string s1, std::string s2) {
    std::string ss1=s1,ss2=s2;
    int cout=0;
    for(int i=0;i<ss1.length();i++)
        for(int j=0;j<ss2.length();j++)
            if(ss1[i]==ss2[j])
            {
                cout++;
                ss2.erase(j,1);
                break;
            }
    return cout;
}
/*
Given two strings, find the number of common characters between them.

Example

For s1 = "aabcc" and s2 = "adcaa", the output should be
commonCharacterCount(s1, s2) = 3.

Strings have 3 common characters - 2 "a"s and 1 "c".
*/
