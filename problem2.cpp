// Problem 2: Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#include<iostream>
using namespace std;
int fibo(int n){
	int h = 0, temp1, temp2;
	if(n == 1)
		h = 1;
	else if(n == 2)
		h = 2;
	else
		{

			h = fibo(n-1) + fibo(n-2);
			// temp1 = fibo(n-1);
			// temp2 = h;
		}
	return h;
}
int main(){
	int sum =0, i=1;
	while(fibo(i) < 4000000){
		if(fibo(i)%2 == 0)
			sum += fibo(i);

		i++;
	}
	cout << sum;
}