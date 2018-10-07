//Write a C++ program to find sum of all natural numbers between 1 to n using recursion.
//include library
#include <iostream>
using namespace std;
//stating the condition for recursion

int sumn(int end , int sum)
	{
	if (end <=0)
	{
		return 0;	
	}
	
	return sum + sumn(end-1,sum+1);         
	}
//including main function
int main()
//inroducing variable
{
	int n;
	cout << "enter the number upto which you want sum"<<endl;
	cin>>n;
	//including recursing function
	cout<<sumn(n,1)<<endl;         
	return 0;
}


