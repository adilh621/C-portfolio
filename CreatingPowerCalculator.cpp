#include <iostream>
using namespace std;

double power(double base, int exponent)
{
	double result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	return result;
}

int main(){
	int base, exponent;
	cout << "enter a base value: "<<endl;
	cin >> base;

	cout << "enter a exponent value: "<<endl;
	cin >> exponent;

	double myAnswer = power(base, exponent);

	cout << "The answer is: " << myAnswer << endl;
	return 0; 
}