#include<iostream>
char firstDigit(std::string inputString)
{
    for(int i=0;i<inputString.length();i++)
        if(isdigit(inputString[i])) return inputString[i];
}
int main()
{
    std::cout<<firstDigit("var_1__Int")<<std::endl;
    std::cout<<firstDigit("q2q-q")<<std::endl;
    std::cout<<firstDigit("0ss")<<std::endl;
    return 0;
}
/*
Find the leftmost digit that occurs in a given string.

Example

For inputString = "var_1__Int", the output should be
firstDigit(inputString) = '1';
For inputString = "q2q-q", the output should be
firstDigit(inputString) = '2';
For inputString = "0ss", the output should be
firstDigit(inputString) = '0'.
*/
