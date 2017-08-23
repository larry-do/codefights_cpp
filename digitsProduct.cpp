int digitsProduct(int a) {
    int ans=0,k=0;
    if(isPrime(a)||a<0) return -1;
    if(a==0) return 10;
    if(a<10&&a>0) return a;
    for(int i=9;i>1;i--)
    {
        if(a%i==0&&!isPrime(a%i)) //de tranh so nhu la so a=33
        {
            ans=ans+i*pow(10,k++);
            a/=i;
            i++;
        }
        if(a==1) return ans;
    }
    return -1;
}
bool isPrime(int n)
{
	if ((n == 2) || (n == 3))
		return true;
	if ((n % 2 == 0) || (n % 3 == 0) || (n < 2))
		return false;
	int i = -1, sqrt_n = sqrt(n);
	do
	{
		i += 6;
		if ((n % i == 0) || (n % (i + 2) == 0))
			break;
	} while (i <= sqrt_n);
	return (i > sqrt_n);
}
/*
Given an integer product, find the smallest positive (i.e. greater than 0) integer the product of whose digits is equal to product. If there is no such integer, return -1 instead.

Example

For product = 12, the output should be
digitsProduct(product) = 26;
For product = 19, the output should be
digitsProduct(product) = -1.
*/
