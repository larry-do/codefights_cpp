//nếu dùng sort thì chạy chậm hơn/ có thể dùng cách là tìm max bằng max_element/ rồi xóa cái này đi, tìm max_element mới xem có bằng element cũ ko
int electionsWinners(std::vector<int> v, int k) {
    std::sort(v.begin(),v.end());
    if(k==0&&v[v.size()-1]==v[v.size()-2]) return 0;
    if(k==0&&v[v.size()-1]!=v[v.size()-2]) return 1;
    int n=0;
    for(int i : v)
    {
        if(i+k>v[v.size()-1])
            n++;
    }
    return n;
}
/*
Elections are in progress!

Given an array of the numbers of votes given to each of the candidates so far, and an integer k equal to the number of voters who haven't cast their vote yet, find the number of candidates who still have a chance to win the election.

The winner of the election must secure strictly more votes than any other candidate. If two or more candidates receive the same (maximum) number of votes, assume there is no winner at all.
*/
