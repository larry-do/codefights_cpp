//giải thích thuật toán:
//Đầu tiên ta sắp xếp nó bằng sort <algorithm>
//Sắp xếp lần nữa theo tiêu chí nếu cứ khác nhau 1 kí tự thì cho đứng cạnh nhau
//Kiểm tra lần nữa, nếu có 1 chuỗi mà chuỗi trước sát nó khác ngoài 1 kí tự, thì kiểm tra xem từ đầu đến chuỗi đó có chuỗi nào thỏa mãn nào thế chỗ được không ( chú ý thỏa mãn chỗ đó sau khi rút ra thì có thỏa mãn những chuỗi quanh nó ko )
//chuỗi đã được sắp xếp tối ưu nhất. Giờ kiểm tra xem có chỗ nào không thỏa mãn đề bài thì return false thôi
bool stringsRearrangement(std::vector<std::string> arr)
{
    std::sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-1;i++)
        for(int j=i+1;j<arr.size();j++)
            if(check(arr[i],arr[j]))
            {
                swap(arr[j],arr[i+1]);
                break;
            }
    for(int i=1;i<arr.size();i++)
        if(!check(arr[i],arr[i-1]))
            for(int j=0;j<i;j++)
                if(check(arr[i],arr[j])&&(j==0||check(arr[j-1],arr[j+1])))
                {
                    arr.insert(arr.begin()+i,arr[j]);
                    arr.erase(arr.begin()+j);
                    break;
                }
    for(int i=0;i<arr.size()-1;i++)
        for(int j=i+1;j<arr.size();j++)
            if(!check(arr[i],arr[j]))
                return false;
            else
                break;

    return true;
}
bool check(std::string a,std::string b)
{
    int k=0;
    for(int i=0;i<a.length();i++)
        if(a[i]!=b[i])
            k++;
    if(k==1)
        return true;
    return false;
}
/*
Given an array of equal-length strings, check if it is possible to rearrange the strings in such a way that after the rearrangement the strings at consecutive positions would differ by exactly one character.

Example

For inputArray = ["aba", "bbb", "bab"], the output should be
stringsRearrangement(inputArray) = false;

All rearrangements don't satisfy the description condition.

For inputArray = ["ab", "bb", "aa"], the output should be
stringsRearrangement(inputArray) = true.

Strings can be rearranged in the following way: "aa", "ab", "bb".
*/
