//write a function to to print all prime numbers between two intervals
#include<iostream>
using namespace std;
void prime(int start,int stop)
{
	int i,count=0;
	while(start<=stop)
	{
		for(i=1;i<=start/2;i++)
		{
			if(start%i==0)
			{
				count++;
			}
		}
		if(count==1)
		{
			cout<<start<<"\t";
		}
		start++;
		count=0;
	}
}
int main()
{
	prime(20,70);
	return 0;
}
