#include <iostream>
using namespace std;
int main(){
   int size;
   cout << "Please enter a size: ";
   cin >> size;
   for (int r = 1; r <= size; ++r){
      for (int c = 1; c <= r; ++c){
         cout << "*";
      }
      cout << endl;
   }
   return 0;
}