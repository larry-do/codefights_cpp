bool variableName(std::string name) {
    for(int i=0;i<name.length();i++)
        if((!isalpha(name[i]))&&(!isdigit(name[i]))&&(name[i]!='_'))
            return false;
    return (isalpha(name[0])||name[0]=='_');
}
/*
Correct variable names consist only of Latin letters, digits and underscores and they can't start with a digit.

Check if the given string is a correct variable name.

Example

For name = "var_1__Int", the output should be
variableName(name) = true;
For name = "qq-q", the output should be
variableName(name) = false;
For name = "2w2", the output should be
variableName(name) = false.
*/
