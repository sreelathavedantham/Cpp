#include<iostream>
using namespace std;

void maxOf2()
{
	int num1,num2;
	cout<<"enter 2 numbers";
	cin>>num1>>num2;
	if(num1>num2)
	{
		cout<<"maximum number is : "<<num1;
	}
	else
	{
		cout<<"maximum number is : "<<num2;
	}
	
}
void maxOf3()
{	
	int num1,num2,num3;
	cout<<"enter 3 numbers";
	cin>>num1>>num2>>num3;
	if(num1>num2 && num1>num3)
	{
		cout<<"maximum number is : "<<num1;
	}
	else if(num2>num1 && num2>num3)
	{
		cout<<"maximum number is : "<<num2;
	}
	else
	{
		cout<<"maximum number is : "<<num3;
	}

}
void negPosZero()
{	
	int num;
	cout<<"enter a number";
	cin>>num;
	if(num>0)
	{
		cout<<num<<" is positive";
	}
	else if(num<0)
	{
		cout<<num<<" is negative";
	}
	else
	{
		cout<<num<<" is zero";
	}
	
}
void divBy5And11()
{
	int num;
	cout<<"enter a number";
	cin>>num;
	if(num%5==0 && num%11==0)
	{
		cout<<num<<" is divisible by 5 & 11";
	}
	else
	{
		cout<<num<<" is not divisible by 5 & 11";
	}
}
void evenOdd()
{
	int num;
	cout<<"enter a number";
	cin>>num;
	if(num%2==0)
	{
		cout<<num<<" is even";
	}
	else
	{
		cout<<num<<" is odd";
	}
}
void alphaOrNot()
{
	char ch;
	cout<<"enter a character";
	cin>>ch;
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
		cout<<ch<<" is alphabet";
	}
	else
	{
		cout<<ch<<" is not an alphabet";
	}
}
void vowelConsonant()
{
	char ch;
	cout<<"enter a character";
	cin>>ch;
	if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
	{
		cout<<ch<<" is vowel";
	}
	else
	{
		cout<<ch<<" is a consonant";
	}
}
void alphaDigitSplChar()
{
	char ch;
	cout<<"enter a character";
	cin>>ch;
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
		cout<<ch<<"is an alphabet";
	}
	else if(ch>='0' && ch<='9')
	{
			cout<<ch<<"is digit";
	}
	else
	{
			cout<<ch<<"is a special character";
	}
}
void upperLower()
{
	char ch;
	cout<<"enter a character";
	cin>>ch;
	if(ch>='a' && ch<='z')
	{
		cout<<ch<<" is lowercase";
	}
	else if(ch>='A' && ch<='Z')
	{
		cout<<ch<<" is uppercase";
	}
}
void viewOptions()
{
	int option;
	do
	{
		cout<<"\n"<<"1.Maximum of 2 numbers"<<"\n";
		cout<<"2.Maximum of 3 numbers"<<"\n";
		cout<<"3.Negative positive or zero"<<"\n";
		cout<<"4.Number divisible by 5 and 11"<<"\n";
		cout<<"5.Even or odd"<<"\n";
		cout<<"6.Character is alphabet or not"<<"\n";
		cout<<"7.vowel or consonant"<<"\n";
		cout<<"8.character is alphabet,digit or special character"<<"\n";
		cout<<"9.Uppercase or lowercase"<<"\n";
		cin>>option;
		switch(option)
		{
			case 1:
				{
					maxOf2();
					break;
				}
			case 2:
				{
					maxOf3();
					break;
				}
			case 3:
				{
					negPosZero();
					break;
				}
			case 4:
				{
					divBy5And11();
					break;
				}
			case 5:
				{
					evenOdd();
					break;
				}
			case 6:
				{
					alphaOrNot();
					break;
				}
			case 7:
				{
					vowelConsonant();
					break;
				}
			case 8:
				{
					alphaDigitSplChar();
					break;
				}
			case 9:
				{
					upperLower();
					break;
				}
			case 0:
				{
					cout<<"Thank you";
					break;
				}
			default:
				{
					cout<<"Invalid input";
				}
		}
	}
while(option!=0);
}
int main()
{
	viewOptions();
	return 0;
}
	
		
		
		
		
		






