bool isLucky(int n) {
    int numDigits=(int)log10(n)+1;
    int sum1=0,sum2=0;
    for(int i=0;i<numDigits;n/=10,i++)
        (i<numDigits/2)?(sum1+=n%10):(sum2+=n%10);
    return sum1==sum2;
}
/*
Ticket numbers usually consist of an even number of digits.
A ticket number is considered lucky if the sum of the first half of the digits is equal to the sum of the second half.

Given a ticket number n, determine if it's lucky or not.

Example

For n = 1230, the output should be
isLucky(n) = true;
For n = 239017, the output should be
isLucky(n) = false.
*/
