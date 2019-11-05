#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int getGCF(int a, int b)
{

    // Everything divides 0  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
   
    // base case 
    if (a == b) 
        return a; 
   
    // a is greater 
    if (a > b) 
        return getGCF(a-b, b); 
    return getGCF(a, b-a); 
} 


int main()
{
	srand(time(0));
	
	int a= 1+(rand()%99);
	int b= 1+(rand()%99);
	

	

	cout << "your two numbers are: " << a << " and " << b << ". The GCF is: "<< getGCF(a,b)<<endl;
}






