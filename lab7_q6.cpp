//Write a C++ program to find reverse of any number using recursion.

#include <iostream>
using namespace std;
//stating condition for recursion
int rev(int a, int reverse)
{
	if (a<=0)
		return reverse;	
	else
		return rev(a/10,(reverse*10)+(a%10));        	
	
}
//including main function
int main()
{
	int n ;	
	cout << "Enter a number : ";	
	cin>>n;
	//including recursion statement
	cout<<"The reverse of the number is: "<<rev (n,0)<<endl;          
	return 0;
}

