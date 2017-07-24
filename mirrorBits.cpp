int mirrorBits(int a) {
    int t = 0;
    while (a != 0) {
        t = 2 * t + a % 2;
        a /= 2;
    }
    return t;
}
/*
Reverse the order of the bits in a given integer.

Example

For a = 97, the output should be
mirrorBits(a) = 67.

97 equals to 1100001 in binary, which is 1000011 after mirroring, and that is 67 in base 10.

For a = 8, the output should be
mirrorBits(a) = 1.
*/
