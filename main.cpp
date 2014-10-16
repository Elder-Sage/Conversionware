#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void binary(){
    int start = 0;
    int rem = 0;         //holds remainder
    int bin[100] = {0};  //place holder for binary list
    int counter = 0;     //keeps track of how long the array is
    
    cout << "Enter a numer in Bast 10 notation: ";
    cin >> start;
    while(start >= 1){
    	rem = start % 2;        
    	if(rem == 0){           //Modular Division used to find remainder
    		bin[counter] = 0;   //check if input is 0 place 0 in array
    	}                       //if remainder is anything else place 1 in array
    	else{
		bin[counter] = 1;
    	}
    counter++;
    start /= 2;
    }
    counter--;		//counter incrimenented 1 more time then needed in loop
    cout << "The inputed number in Binary is: ";
    while(counter >= 0){
    	cout << bin[counter]; //prints binary string 
    	counter--;
    }
    cout << endl << endl;
}
	

int main(){
	char repeat = 'n';
  
  	binary();

  	cout << "Convert another number enter Y or N: ";  		
  	cin >> repeat;
  	if(repeat == 'y' || repeat == 'Y'){
		cout << endl;
	  	main();
  	}
  	else if(repeat == 'n' || repeat == 'N'){
		return 0;
  	}
  	else{
	  	cout << "Error closing program" << endl;			
  	}
  	return 0;
}
