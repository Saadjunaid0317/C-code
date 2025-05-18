#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float radius, area;
	cout << "Please Enter The Radius Of Circle : ";
	cin >> radius;
	cout << endl;
	area = (22/7) * pow(radius, 2);
	cout << "The Area Of Given Circle Is = " << area << endl;
	return 0;
}
