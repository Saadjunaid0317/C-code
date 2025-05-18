#include<iostream>
using namespace std;

int main()
{
	int monthnumber;
	cout << "\t\t ==MONTH TO DAYS==\n" << endl;
	cout << "Enter month number(1-12): " << endl;
	cin >> monthnumber;
	switch (monthnumber)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		cout << "31 days" << endl;
		break;
	case 2: 
		cout << "28 or 29 days" << endl;
		break;
	case 4: case 6: case 9: case 11:
		cout << "30 days" << endl;
		break;
	default: 
		cout << "Invalid input!!! enter month number between 1-12" << endl;
	}
	return 0;
}


