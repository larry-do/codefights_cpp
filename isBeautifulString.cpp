bool isBeautifulString(std::string s) {
    std::vector<std::vector<int>> count;
    for(int c='a';c<='z';c++)
    {
        int n=0;
        for(char k : s)
            if(k == c) n++;
        std::vector<int> tmp;
        tmp.push_back(n);
        count.push_back(tmp);
    }
    for(int i='a';i<='a';i++)
        if(count[i][0]<count[i+1][0])
            return false;
    return true;
}
/*
A string is said to be beautiful if b occurs in it no more times than a; c occurs in it no more times than b; etc.

Given a string, check whether it is beautiful.

Example

For inputString = "bbbaacdafe", the output should be
isBeautifulString(inputString) = true;
For inputString = "aabbb", the output should be
isBeautifulString(inputString) = false;
For inputString = "bbc", the output should be
isBeautifulString(inputString) = false.
*/
