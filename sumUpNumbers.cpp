int sumUpNumbers(std::string s) {
    std::string a;
    s.push_back('!');
    int sum=0;
    for(char c : s)
        if(isdigit(c)) a.push_back(c);
        else if (!isdigit(c)&&a.length()!=0){
            sum+=stoi(a);
            a.clear();
        }
    return sum;
}
/*
CodeMaster has just returned from shopping. He scanned the check of the items he bought and gave the resulting string to Ratiorg to figure out the total number of purchased items. Since Ratiorg is a bot he is definitely going to automate it, so he needs a program that sums up all the numbers which appear in the given input.

Help Ratiorg by writing a function that returns the sum of numbers that appear in the given inputString.

Example

For inputString = "2 apples, 12 oranges", the output should be
sumUpNumbers(inputString) = 14.
*/
