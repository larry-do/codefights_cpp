bool almostIncreasingSequence(std::vector<int> a) {
    int n=a.size(), p=-1, c=0;
    for (int i=1;i<n;i++) if (a[i-1]>=a[i]) p=i, c++;
    if (c>1) return 0;
    if (c==0) return 1;
    if (p==n-1 || p==1) return 1;
    if (a[p-1] < a[p+1]) return 1;
    if (a[p-2] < a[p]) return 1;
    return 0;
}
//solution 2
bool almostIncreasingSequence(std::vector<int> sequence)
{
    bool result=false;
    for(int i=0;i<sequence.size()-1;i++)
        if(sequence[i]>=sequence[i+1])//tim so nao khong dung thu tu tang dan
        {
            bool kq=true; //tranh cho i la so sat cuoi cung
            for(int j=i+1;j<sequence.size()-1;j++) //kiem tra phai co tang dan ko
                if(sequence[j]>=sequence[j+1])
                {
                    kq=false;
                    break;
                }
            for(int j=0;j<i-1;j++)//kiem tra trai co tang dan ko
                if(sequence[j]>=sequence[j+1])
                {
                    kq=false;
                    break;
                }
            if(kq==true&&(sequence[i+1]>sequence[i-1]||i==0))
            {
                result=true;//kiem tra so i
                break;
            }
            if(kq==true&&(sequence[i]>sequence[i-1])&&(sequence[i]<sequence[i+2]||(i+1)==(sequence.size()-1)))
            {
                result=true;//kiem tra so i+
                break;
            }
        }
    return result;
}
/*
Given a sequence of integers as an array,
determine whether it is possible to obtain a strictly increasing sequence by removing
no more than one element from the array.

Example

For sequence = [1, 3, 2, 1], the output should be
almostIncreasingSequence(sequence) = false;

There is no one element in this array that can be removed in order to get a strictly increasing sequence.

For sequence = [1, 3, 2], the output should be
almostIncreasingSequence(sequence) = true.

You can remove 3 from the array to get the strictly increasing sequence [1, 2].
Alternately, you can remove 2 to get the strictly increasing sequence [1, 3].
*/
