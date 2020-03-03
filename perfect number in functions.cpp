//write a function to check given number is perfect or not (void isPrime)
#include<iostream>
using namespace std;
void isPerfect(int num)
{
int i,sum=0;
 for(i=1;i<=num/2;i++)

	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}

	if(sum==num)
	 {
	    cout<<"is perfect "<<num;
	 }
	else
	 {
		cout<<"is not perfect "<<num;
	 }
	
	
}
int main()
{
	isPerfect(28);
}
