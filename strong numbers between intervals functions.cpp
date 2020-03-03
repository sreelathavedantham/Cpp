//write a function to print all strong numbers between 2 intervals
#include<iostream>
using namespace std;
void strong(int start,int stop)
{
	int rem,fact=1,sum=0,temp;
	while(start<=stop)
	{
		temp=start;
		while(start!=0)         //145!=0
		{
			rem=start%10;       //145%10=5(%=consider last number)
			while(rem>=1)       //5>=1
			{
				fact=fact*rem;   //5
				rem--;
			}
			sum=sum+fact;
			fact=1;
			start=start/10;
		}
		start=temp;
		if(start==sum)
		{
			cout<<start<<"\t";
		}
		start++;
		sum=0;
	}
}
int main()
{
	strong(1,500);
}

