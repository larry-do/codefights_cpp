int makeArrayConsecutive2(std::vector<int> statues) {
    for(int i=0;i<statues.size()-1;i++)
        for(int j=i+1;j<statues.size();j++)
            if(statues[j]<statues[i])
                std::swap(statues[i],statues[j]);
    return statues[statues.size()-1]-statues[0]-statues.size()+1;
}
int makeArrayConsecutive2(std::vector<int> statues) {
    //sap xep no
    for(int i=0;i<statues.size()-1;i++)
        for(int j=i+1;j<statues.size();j++)
            if(statues[j]<statues[i])
                std::swap(statues[i],statues[j]);
    //rồi tính tổng các khoảng cách còn thiếu
    int a=0;
    for(int i=0;i<statues.size()-1;i++)
        a=a+(statues[i+1]-statues[i]-1);
    return a;
}
/*
Ratiorg got statues of different sizes as a present from CodeMaster for his birthday,
each statue having an non-negative integer size. Since he likes to make things perfect,
he wants to arrange them from smallest to largest so that each statue will be bigger than the previous one exactly by 1.
He may need some additional statues to be able to accomplish that.
Help him figure out the minimum number of additional statues needed.

Example

For statues = [6, 2, 3, 8], the output should be
makeArrayConsecutive2(statues) = 3.

Ratiorg needs statues of sizes 4, 5 and 7.
*/
