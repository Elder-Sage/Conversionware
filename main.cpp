#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main(){
  int start = 0;       //user entered number
  int rem = 0;         //holds remainder
  int bin[100] = {0};  //place holder for binary list
  int counter = 0;     //keeps track of how long the array is
  
  cout << "Enter a decimal number in base 10";
  cin >> start;
  
  while(start >= 1){
    rem = start % 2;        
    if(rem == 0){           //Modular Division used to find remainder
      bin[counter] = 0;     //check if input is 0 place 0 in array
    }                       //if remainder is anything else place 1 in array
    else{
    bin[counter] = 1;
    }
    counter++;
    start /= 2;
  }
  
  counter--; //counter incrimented 1 uneaded time in above loop so this fixes that so printing works correctly
  cout << "The Binary conversion of your number is: ";
  while(counter >= 0){
    cout << bin[counter]; //prints binary string 
    counter--;
  }
  return 0;
  }