bool isIPv4Address(std::string inputString) {
    for(int i=0;i<inputString.length();i++)
    {
        if((i==0||i==inputString.length()-1)&&inputString[i]=='.')
            return false;
        if(inputString[i]=='.'&&inputString[i+1]=='.')
            return false;
        if(!isdigit(inputString[i])&&inputString[i]!='.')
            return false;
    }
    std::string a;
    std::vector<std::string> b;
    for(int i=0;i<inputString.length();i++)
    {
        if(isdigit(inputString[i]))
            a.push_back(inputString[i]);
        else
        {
            b.push_back(a);
            a.clear();
        }
    }
    b.push_back(a);//push back so cuoi
    if(b.size()!=4)
        return false;
    for(int i=0;i<b.size();i++)
    {
        int k=std::stol(b[i]);
        if(k<0||k>255)
            return false;
    }
    return true;
}
/*
An IP address is a numerical label assigned to each device (e.g., computer, printer) participating in a computer network that uses the Internet Protocol for communication. There are two versions of the Internet protocol, and thus two versions of addresses. One of them is the IPv4 address.

IPv4 addresses are represented in dot-decimal notation, which consists of four decimal numbers, each ranging from 0 to 255, separated by dots, e.g., 172.16.254.1.

Given a string, find out if it satisfies the IPv4 address naming rules.

Example

For inputString = "172.16.254.1", the output should be
isIPv4Address(inputString) = true;

For inputString = "172.316.254.1", the output should be
isIPv4Address(inputString) = false.

316 is not in range [0, 255].

For inputString = ".254.255.0", the output should be
isIPv4Address(inputString) = false.

There is no first number.
*/
