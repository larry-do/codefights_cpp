bool validTime(std::string time) {
    int a = stoi(time.substr(0, 2));
    int b = stoi(time.substr(3, 2));
    return a < 24 && b < 60;
}
/*
Check if the given string is a correct time representation of the 24-hour clock.

Example

For time = "13:58", the output should be
validTime(time) = true;
For time = "25:51", the output should be
validTime(time) = false;
For time = "02:76", the output should be
validTime(time) = false.
*/
