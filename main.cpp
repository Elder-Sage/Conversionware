#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main(){
  int start = 0; //user entered number
  int rem = 0;   //holds remainder
  int bin[100] = {0}; //place holder for binary string
  int counter = 0;
  
  cout << "Enter a decimal number in base 10";
  cin >> start;
  
  while(start > 0){
    rem = start % 2;
    start /= 2;
    if(rem == 0){
      bin[counter] = 0;
    }
    else()
    bin[counter] = 1;
  }
  return 0;
  }
