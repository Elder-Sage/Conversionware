#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using std::cout; 
using std::cin;
using std::endl;

void dectobinary(int start){
	int rem = 0;         //holds remainder
	int bin[100] = { 0 };  //place holder for binary list
	int counter = 0;     //keeps track of how long the array is

	while (start >= 1){
		rem = start % 2;
		if (rem == 0){           	//Modular Division used to find remainder
			bin[counter] = 0;   	//check if input is 0 place 0 in array
		}				//if remainder is anything else place 1 in array
		else{
			bin[counter] = 1;
		}
		counter++;
		start /= 2;
	}
	counter--;		//counter incrimenented 1 more time then needed in loop
	cout << "The inputed number in Binary is: ";
	while (counter >= 0){
		cout << bin[counter]; //prints binary string 
		counter--;
	}
	cout << endl << endl;
}

int bintodecimal(std::string bin){
	int converted = 0;
	int expo;
	int loop;
	expo = bin.length() - 1;
	loop = expo;
	for (int x = 0; x <= loop; x++){
		if (bin[x] == '1'){
			converted += pow(2, expo);
			expo--;
		}
		else{
			expo--;
		}
	}
	return converted;
}

int main(){
	int menu;
	char answer = 'n';
	int input;
	int converted;
	std::string bin;
	do{
		cout << "Choose" << endl;
		cout << "1: Decimal -> Binary" << endl;
		cout << "2: Decimal -> Octal" << endl;
		cout << "3: Decimal -> Hexideximal" << endl;
		cout << "4: Binary -> Decimal" << endl;
		cout << "5: Binary -> Octal" << endl;
		cout << "6: Binary -> Hexidecimal" << endl;
		cout << "Choice: ";
		cin >> menu;
		switch (menu){
		case 1:
			cout << endl;
			cout << "Enter a Base 10 number: ";
			cin >> input;
			dectobinary(input);
			break;
		case 2: 
			cout << endl;
			cout << "Enter a Base 10 number: ";
			cin >> input;
			cout << "The input in Octal is " << std::oct << input << endl;
			break;
		case 3:
			cout << endl;
			cout << "Enter a Base 10 number: ";
			cin >> input;
			cout << "The input in Hexidecimal is " << std::hex << input << endl;
			break;
		case 4:
			cout << endl;
			cout << "Enter a binary number: ";
			cin >> bin;
			converted = bintodecimal(bin);
			cout << "Once converted your input is " << converted << " in Base 10 notation" << endl;
			break;
		case 5:
			cout << endl;
			cout << "Enter a binary number: ";
			cin >> bin;
			converted = bintodecimal(bin);
			cout << "Once converted your input is " << std::oct << converted << " in Octal." << endl;
			break;
		case 6:
			cout << endl;
			cout << "Enter a binary number: ";
			cin >> bin;
			converted = bintodecimal(bin);
			cout << "Once converted your input is " << std::hex << converted << " in Hexadecimal." << endl;
			break;

		} //end of switch
		cout << "Would you like to run the program again Press Y or N: ";
		cin >> answer;
		cout << endl;
	} while (answer == 'Y' || answer == 'y');
	return 0;
}
