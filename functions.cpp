#include <iostream>
using namespace std;

// Simple multiplation function
int Multiply(int a, int b)
{
	return a * b;
}
void multiplyandlog(int a, int b)
{
int result = Multiply(a, b);
	cout << result <<endl;
}

int main(){

	multiplyandlog(3,5);
	multiplyandlog(10,5);
	multiplyandlog(9,5); 

	// int result = Multiply(3 , 8);
	// cout << result <<endl;

	// int result2 = Multiply(5 , 8);
	// cout << result2 <<endl;

	// int result3 = Multiply(7 , 8);
	// cout << result3 <<endl;

	std::cin.get();



}