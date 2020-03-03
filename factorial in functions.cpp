//write a function to return factorial of a given number
#include<iostream>
using namespace std;
int factorial(int num)
{
	int fact=1,temp;
	temp=num;
	while(num>=1)
	{
		fact=fact*num;
		num--;
	}
	
	return fact;
}
int main()
{
	int fac;
	fac=factorial(5);
	cout<<fac;
}
