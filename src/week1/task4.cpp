#include<iostream>
using namespace std;
int main()
{
	int celsius, fahrenheit;
	cout << "Please Enter Temprature In Celsius : ";
	cin >> celsius;
	fahrenheit = (celsius * 9 / 5) + 32;
	cout << "The Temprature In Fahrenheit Is " << fahrenheit<<endl;
	cout << endl;
	return 0;
}
