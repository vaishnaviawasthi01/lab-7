//write a c++ program to print all natural numbers between 1 to n using recursion.
//including library
#include<iostream>
using namespace std;
//stating condition of recursion
	void print(int n)
	{
		if(n!=0)
		{
		print(n-1);
		cout<<n<<endl; 
		}
	}
//including main function
int main()
//introducing variable 'a'
{
	int a;
	cout<<"enter the number"<<endl;
	cin>>a;
	cout<<"the series of natural number is:"
//including condition of recursion
	print(a);
	return 0;
}
