//Write a C++ program to find sum of digits of a given number using recursion.
//includinf library
#include <iostream>
using namespace std;
//stating the condition for recursion
int sumOfDigit(int a)
	{
	if(a<=0)
		{
		return 0;	
		}
	else
		{
		return a%10 + sumOfDigit(a/10);      
		}
	}
//including main function
int main()
{
	int a;
	cout << "Enter the desired number : " <<endl;
	cin >> a;
	//including recursion function
	cout << "The sum of the digits is = "<<sumOfDigit(a)<<endl;           
	return 0;
}
