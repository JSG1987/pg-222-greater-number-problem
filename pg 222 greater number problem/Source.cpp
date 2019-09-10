//the goal of this program is to use a conditional opperator to guess a bigger number. 
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	// values a and b are numbers the user will enter and the computer will tell which is bigger
	int a;
	int b;
	cout << "Enter two numbers\n";
	cout << "Enter the first number\n";
	cin >> a;
	cout << "enter the second number\n";
	cin >> b;
	if (a > b)
	{
		cout << a << " is the bigger number\n";
		cout << b << " is the smalleer number\n";
	}
	else if (b>a)
	{
		cout << b << " is the bigger number\n";
		cout << a << " is the smaller number\n";
	}
	




	system("PAUSE");
	return 0; 
}