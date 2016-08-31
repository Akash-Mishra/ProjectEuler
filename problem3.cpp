// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?
#include <iostream>
#include <math.h>
using namespace std;
int genPrime(int n)
{
    int i =2;
    int x = 0;
    for(i=2;i<=(n/2);i++)
    {
	if(n%i == 0)
	{
		x = 1;
		break;
	}
        else
          x = 0;
    }
    return x;
}
int main()
{
	// int i = 2;
        //unsigned long long int number;
        //cin>>number;
        unsigned long int num = 600851475143, large=2;
        int i=2;
        for(i=5;i<=sqrt(num/2);i++)
        {
		if(genPrime(i) == 0 && num%i == 0)
                    {large = i;}
        }
        cout<<large;
}
