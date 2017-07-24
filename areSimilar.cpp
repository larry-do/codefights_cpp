bool areSimilar(std::vector<int> a, std::vector<int> b) {
    if (a == b)
        return true;
    std::iter_swap(
        std::mismatch(a.begin(), a.end(), b.begin(), b.end()).first,
        std::mismatch(a.rbegin(), a.rend(), b.rbegin(), b.rend()).first
    );
    return a == b;
}
//solution 2
bool areSimilar(std::vector<int> a, std::vector<int> b) {
    if(a==b) return true;
    for(int i=0;i<a.size()-1;i++)
        if(a[i]!=b[i])
            for(int j=i+1;j<a.size();j++)
                if(a[j]!=b[j])
                {
                    swap(a[i],a[j]);
                    if(a==b) return true;
                    else if(a!=b) swap(a[i],a[j]);
                }
    return false;
}
/*
Two arrays are called similar if one can be obtained from another by swapping at most one pair of elements in one of the arrays.

Given two arrays a and b, check whether they are similar.

Example

For a = [1, 2, 3] and b = [1, 2, 3], the output should be
areSimilar(a, b) = true.

The arrays are equal, no need to swap any elements.

For a = [1, 2, 3] and b = [2, 1, 3], the output should be
areSimilar(a, b) = true.

We can obtain b from a by swapping 2 and 1 in b.

For a = [1, 2, 2] and b = [2, 1, 1], the output should be
areSimilar(a, b) = false.

Any swap of any two elements either in a or in b won't make a and b equal.
*/
