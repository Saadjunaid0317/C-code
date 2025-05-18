#include<iostream>
using namespace std;

int main()
{
	char op;
	float num1, num2;
	cout << "\t\t==SIMPLE CALCULATOR==\n" << endl;
	cout << "\nEnter First Number: " << endl;
	cin >> num1;
	cout << "Enter Second Number: " << endl;
	cin >> num2;
	cout << "Enter operator: +, -, *, /: " << endl;
	cin >> op;
	switch (op)
	{
	case '+':
		cout << endl << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		break;
	case '-':
		cout << endl << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		break;
	case '*':
		cout << endl << num1 << " * " << num2 << " = " << num1 * num2 << endl;
		break;
	case '/':
		cout << endl << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		break;
	default:
		cout << "OPERATOR NOT DEFINED! \nPLEASE TRY AGAIN" << endl;
		break;
	}
	return 0;
}


