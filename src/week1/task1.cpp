#include<iostream>
using namespace std;
int main()
{
float a, b, c, d, sum, prod, avg;
cout << "Program To Find Sum, Product And Average Of 4 Numbers Given By TheUser" << endl;
cout << "Enter First Number : " << endl;
cin >> a;
cout << "Enter Second Number : " << endl;
cin >> b;
cout << "Enter Third Number : " << endl;
cin >> c;
cout << "Enter Fourth Number : " << endl;
cin >> d;
cout << endl;
sum = a + b + c + d;
cout << "Sum Of Given Numbers = " << sum << endl;
prod = a * b * c * d;
cout << "Product Of Given Numbers = " << prod << endl;
avg = sum / 4;
cout << "Average Of Given Numbers = " << avg << endl;
cout << endl;
return 0;
}