#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	cout << " ====== Calcualating Percentage and Giving Grade ======" << endl;
	float mathematics,chemistry,physics,biology,computer,sum, percentage;
	A:
	cout << "Enter Your Mathematics Marks : ";
	cin >> mathematics;
	if (mathematics > 100 || mathematics < 0)
	    {
            cout << "Your Mathematics Marks Are Wrong " << endl;
		goto A;
    }
	B:
	cout << "Enter Your Chemistry Marks : ";
	cin >> chemistry;
	if (chemistry > 100 || chemistry<0)
	    {
            cout << "Your Chemistry Marks Are Wrong " << endl;
		goto B;
    }
	C:
	cout << "Enter Your Physics Marks : ";
	cin >> physics;
	if (physics > 100 || physics < 0)
	    {
            cout << "Your Physics Marks Are Wrong " << endl;
		goto C;
    }
	D:
	cout << "Enter Your Biology Marks : ";
	cin >> biology;
	if (biology > 100 || biology < 0)
	    {
            cout << "Your Biology Marks Are Wrong" << endl;
		goto D;
    }
	E:
	cout << "Enter Your Computer Marks : ";
	cin >> computer;
	if (computer > 100 || computer < 0)
	    {
            cout << "Your Computer Marks Are Wrong" << endl;
		goto E;
    }

	sum = mathematics + chemistry + physics + biology + computer;
	cout << "Your Total Marks Of Five Subjects Are = " << sum << endl;

	percentage = (sum*100)/500;
    cout << "Your Percentage Is = " << percentage << endl;

	if (percentage >= 90)
	{
        cout << "Your Grade is A" << endl;
    }
	else if (percentage >= 80)
	{
        cout << "Your Grade is B" << endl;
    }
    else if (percentage >= 70)
	{
        cout << "Your Grade is C" << endl;
    }
	else if (percentage >= 60)
	{
        cout << "Your Grade is D" << endl;
    }
	else if (percentage >= 40)
	{
        cout << "Your Grade is E" << endl;
    }
	else
	{
        cout << "Your Grade is F " << endl;
    }
	return 0;
}


