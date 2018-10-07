//Write a C++ program to check whether a number is palindrome or not using recursion.
//including library
#include <iostream>
using namespace std;
//stating condition for recursion 
int reverse(int a, int reverse_number){
	if (a<=0)
		return reverse_number;	
	
	return reverse(a/10,(reverse_number*10)+(a%10));       
	
}
//including main function
int main()
{
	int n ;	
	cout << "Enter a number : ";	
	cin>>n;
	//including recursion function
	int rev = reverse(n,0);                   
	if (n==rev)
		cout << "It is a palindrome"<<endl;	 	
	else
		cout << "It is not a palindrome"<<endl;
	return 0;
}
