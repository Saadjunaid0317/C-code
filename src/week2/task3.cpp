#include<iostream>
using namespace std;

int main()
{
	int age;
	cout << "..Voting Eligiblity Checker.." << endl;
	cout << "Enter your age: " << endl;
	cin >> age;
	if (age >= 18)
	{
        cout << "Person is eligible for voting" << endl;
    }
    else
    {
        cout << "Person is not eligible for voting" << endl;
    }
    return 0;
}
