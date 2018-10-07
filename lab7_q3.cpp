#include<iostream>
using namespace std;
void even(int n)
{
	if(n>=0)
	{
		if(n%2==0)
		{
		cout<<n<<endl;
		even(n-2);
		}
		else
		{
		n--;
		cout<<n<<endl;
		even(n-2);
		}
	}
}

void odd(int n)
{
	if(n>=0)
	{
		if(n%2!=0)
		{
		cout<<n<<endl;
		odd(n-2);
		}
		else
		{
		n--;
		cout<<n<<endl;
		odd(n-2);
		}
	}
}
int main()
{
	int a;
	char choice;
	cout<<"enter the number:"<<endl;
	cin>>a;
	cout<<"enter your choice: even or odd"<<endl;
	cin>>choice;
	if(choice=='e')
	{
	even(a);
	}
	else if(choice=='o')
	{
	odd(a);
	}
	else
	{
	cout<<"invalid data, please enter number between even or odd"<<endl;
	}
	return 0;
}
