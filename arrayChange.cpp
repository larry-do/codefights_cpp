//để bài là mỗi bước đi chỉ được tăng 1 giá trị của 1 phần tử, tính tổng giá trị phải tăng để tạo ra mảng tăng chặt
int arrayChange(std::vector<int> a) {
    int k=0;
    for(int i=1;i<a.size();i++)
        while(a[i]<=a[i-1])
        {
            a[i]++;
            k++;
        }
    return k;
}
/*
You are given an array of integers. On each move you are allowed to increase exactly one of its element by one.
Find the minimal number of moves required to obtain a strictly increasing sequence from the input.

Example

For inputArray = [1, 1, 1], the output should be
arrayChange(inputArray) = 3.
*/
