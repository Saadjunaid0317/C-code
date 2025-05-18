#include<iostream>
using namespace std;

int main()
{
	char op , ch;
	float num1, num2;
	cout << "\t\t==SIMPLE CALCULATOR==\n" << endl;
	A:
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
	cout << "Do You Want To Continue? \nPress 'Y' For Yes AND 'N' For No" << endl;
	cin >> ch;
	if (ch == 'Y' || ch == 'y')
	{
		goto A;
	}
	return 0;
}


