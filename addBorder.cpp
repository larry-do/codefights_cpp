std::vector<std::string> addBorder(std::vector<std::string> picture) {
    for(int i=0;i<picture.size();i++)
        picture[i]="*"+picture[i]+"*";
    picture.insert(picture.begin(),string(picture[0].size(),'*'));
    picture.insert(picture.end(),string(picture[0].size(),'*'));
    return picture;
}
/*
Given a rectangular matrix of characters, add a border of asterisks(*) to it.

Example

For

picture = ["abc",
           "ded"]
the output should be

addBorder(picture) = ["*****",
                      "*abc*",
                      "*ded*",
                      "*****"]
*/
