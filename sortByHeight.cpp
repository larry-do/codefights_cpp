std::vector<int> sortByHeight(std::vector<int> a) {
    for(int i=0;i<a.size()-1;i++)
    {
        if(a[i]==-1) continue;
        for(int j=i+1;j<a.size();j++)
        {
            if(a[j]==-1) continue;
            if(a[i]>a[j]) swap(a[i],a[j]);
        }
    }
    return a;
}
/*
Some people are standing in a row in a park. There are trees between them which cannot be moved.
Your task is to rearrange the people by their heights in a non-descending order without moving the trees.

Example

For a = [-1, 150, 190, 170, -1, -1, 160, 180], the output should be
sortByHeight(a) = [-1, 150, 160, 170, -1, -1, 180, 190].
*/
