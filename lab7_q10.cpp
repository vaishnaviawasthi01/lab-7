//Write a C++ program to generate nth Fibonacci term using recursion.
//including library
#include <iostream>
using namespace std;
//stating condition for recursion
int fibonacci(int a,int b,int c)
{
	cout << b+c <<endl;
	if (a == 0)
	{
		return 0;	
	}
	return b + fibonacci(a-1, b+c,b);        
}
//including main function
int main()
{
	int n;
	cout << "Enter the number of terms : ";
	cin >> n;
	cout <<"1\n1\n";
	fibonacci(n-2,1,1);                 
	return 0;
}

