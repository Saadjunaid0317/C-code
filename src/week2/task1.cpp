#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Differentiation Between Even & Odd Numbers" << endl;
	cout << "Enter an integer: " << endl;
	cin >> number;
	if (number % 2 == 0)
		cout << "Given Number is even." << endl;
	else
		cout << "Given Number is odd." <<endl;
	
	return 0;
}