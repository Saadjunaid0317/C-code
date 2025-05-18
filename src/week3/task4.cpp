#include<iostream>
using namespace std;

int main()
{
	int sidea, sideb, sidec, sum;
	cout << "Enter sides of triangle" << endl;
	cin >> sidea >> sideb >> sidec;
	sum = sidea + sideb + sidec;
	switch (sum)
	{
	case 180:
	    {cout << "Triangle is valid!!" << endl; }
	break;
	default:
	    {cout << "The triangle is not valid!!" << endl; }
	}
	return 0;
}
