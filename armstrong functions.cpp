//write a function to print all armstrong numbers between 2 intervals
#include<iostream>
#include<math.h>
using namespace std;
void armstrong(int start,int stop)
{
	int digits=0,sum=0,rem,temp;
	while(start<=stop)
	{
		temp=start;
	while(start!=0)
	{
		start=start/10;
		digits++;
	}
	start=temp;
	while(start!=0)
	{
		rem=start%10;
		sum=sum+pow(rem,digits);
		start=start/10;
	}
	start=temp;
	if(start==sum)
	{
		cout<<start<<"\t";
	}

	start++;
	digits=0;
	sum=0;
	}
	
}
int main()
{
	armstrong(1,200);
}
