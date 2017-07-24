int absoluteValuesSumMinimization(std::vector<int> a) {
    return a[(a.size() - 1) / 2];
}
//cách khác tổng quát hơn
//nên gán cho min là giá trị trường hợp đầu
int absoluteValuesSumMinimization(std::vector<int> a) {
    int min=100000000,value;
    for(int i=0;i<a.size();i++)
    {
        int sum=0;
        for(int j=0;j<a.size();j++)
            sum+=abs(a[j]-a[i]);
        cout<<sum<<' ';
        if(sum<min)
        {
            value=a[i];
            min=sum;
        }
    }
    return value;
}
/*
Given a sorted array of integers a, find an integer x from a such that the value of

abs(a[0] - x) + abs(a[1] - x) + ... + abs(a[a.length - 1] - x)
is the smallest possible (here abs denotes the absolute value).
If there are several possible answers, output the smallest one.

Example

For a = [2, 4, 7], the output should be
absoluteValuesSumMinimization(a) = 4.
*/
