//writing a program to find power of any number using recursion.

//including library

#include<iostream>
using namespace std;
//stating condition for recursion

	int power(int n,int p)
	{
		if(p!=0)
		{
			return n*power(n,p-1);
		}
		else 
		{
			return 1;
		}
	}
//including main function
	int main()
	{
//introducing variables
		int num,pow;
		cout<<"the number:"<<endl;
		cin>>num;
		cout<<"and power:"<<endl;
		cin>>pow;
//using recursion in main function
		cout<<"number raised to the given power="<<power(num,pow)<<endl;
//returning		
		return 0;
	}
