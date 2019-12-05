#include <iostream>
#include <cmath>
using namespace std;

int factorialfinder(int x){
	if (x==1){
		return 1;
	}else{
		return x * factorialfinder(x-1);
	}
}

int main(){

	cout << factorialfinder(1) << endl;

}