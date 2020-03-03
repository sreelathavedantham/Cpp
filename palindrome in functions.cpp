//write a function to return reverse of a number
#include<iostream>
using namespace std;
int reverse(int num)
{
	int reverse=0,rem;
	while(num!=0)   //1234!=0
	{
		rem=num%10;   //1234%10=4
		reverse=reverse*10+rem; // 0*10+4=4
		num=num/10;
	}

	return reverse;
}
int main()
{
	int rev;
	rev=reverse(1234);
	cout<<rev;
}
