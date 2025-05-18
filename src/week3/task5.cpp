#include<iostream>
using namespace std;

int main()
{
	int chem, math, bio, phy, comp, avg;
	float sum;
	A:
	cout << "Enter Chemistry Marks" << endl;
	cin >> chem;
	if (chem < 0 || chem > 100)
	{
		cout << "Chemistry Marks Are Wrong!! \nTRY AGAIN!!" << endl;
		goto A;
	}
	B:
	cout << "Enter Physics Marks" << endl;
	cin >> phy;
	if (phy < 0 || phy > 100)
	{
		cout << "Physics Marks Are Wrong!! \nTRY AGAIN!!" << endl;
		goto B;
	}
	C:
	cout << "Enter Mathematics Marks" << endl;
	cin >> math;
	if (math < 0 || math > 100)
	{
		cout << "Mathematics Marks Are Wrong!! \nTRY AGAIN!!" << endl;
		goto C;
	}
	D:
	cout << "Enter Biology Marks" << endl;
	cin >> bio;
	if (bio < 0 || bio > 100)
	{
		cout << "Biology Marks Are Wrong!! \nTRY AGAIN!!" << endl;
		goto D;
	}
	E:
	cout << "Enter Computer Marks" << endl;
	cin >> comp;
	if (comp < 0 || comp > 100)
	{
		cout << "Computer Marks Are Wrong!! \nTRY AGAIN!!" << endl;
		goto E;
	}
	sum = (chem + math + bio + phy + comp);
	avg = (sum / 5);
	avg = avg / 10;
	switch (avg)
	{
	case 10: case 9:
		cout << "GRADE A" << endl; break;
	case 8:
		cout << "GRADE B" << endl; break;
	case 7:
		cout << "GRADE C" << endl; break;
	case 6:
		cout << "GRADE D" << endl; break;
	case 5: case 4:
		cout << "GRADE E" << endl; break;
	case 3: case 2: case 1: case 0:
		cout << "GRADE F" << endl; break;
	}
	return 0;
}


