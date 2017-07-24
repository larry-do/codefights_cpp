//Chả hiểu sao chố tìm thấy 2 kí tự bằng nhau kia. mình chỉ cần xóa 2 kí tự s[i] s[j] đi. nếu cuối cùng còn 1 kí tự hoặc hết kí tự thì đó là chuỗi đối xứng. tức là sắp xếp đối xứng được. Nhưng lại bị chấm sai ?? Thôi tạm cách chuối này ( cách này cần khai báo thêm chuỗi a)
////mấy cách của đại ca top chả hiểu mẹ gì T_T
bool palindromeRearranging(std::string inputString) {
    std::string a;
    if(inputString.length()==1) return true;
    for(int i=0;i<inputString.length()-1;i++)
    {
        for(int j=i+1;j<inputString.length();j++)
        {
            if(inputString[i]==inputString[j])
            {
                a.push_back(inputString[j]);
                inputString.erase(j,1);
                break;
            }
        }
    }
    if((inputString.length()==a.length()) || (inputString.length()-1==a.length()))
        return true;
    return false;
}
/*
Given a string, find out if its characters can be rearranged to form a palindrome.

Example

For inputString = "aabb", the output should be
palindromeRearranging(inputString) = true.

We can rearrange "aabb" to make "abba", which is a palindrome.
*/
