// Write a C++ program to find GCD (HCF) of two numbers using recursion.
//including library
#include <iostream>
using namespace std;
//stating condition for recursion
int hcf(int x,int y,int a,int b)
	{	
	if (y>=a||y>=b)
		{
		return x;
		}
			if (a%y == 0 && b%y == 0 && y > x)
			{
			return hcf(y,y+1,a,b);
			}
		else
			{
			return hcf(x,y+1,a,b);   
			}		
		}
	
//including main function
int main()
{	
	int a,b;
	cout<<"hcf(a,b)\nEnter a followed by b : "; 
	cin >> a >> b;
	//including recursion function
	cout << "hcf("<<a<<","<<b<<") = "<< hcf(1,1,a,b) << endl;   
	return 0;
}
