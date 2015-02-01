#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float KilotoPound(float &i){
	float ibs;
	ibs = i * 2.2;
	return ibs;
}

float CeltoKel(float &i){
	float kel;
	kel = i + 273.15;
	return kel;
}

float TeatoMill(float &i){
	float Mill;
	Mill = i * 4.92;
	return Mill;
}

void multiTable(){
	cout << "Input value: ";
	int i;
	cin >> i;
	system("CLS");
	cout << "   ";
	for(int table = 1; table <= i; table++){
		cout << setw(3) << table << "  ";
	}
	cout << endl;
	for(int counterx = 1; counterx <= i; counterx++){
		 cout << counterx << "| ";
		  for(int countery = 1; countery <= i; countery++){
			  cout << setw(3) << (counterx * countery) << "  ";
          }
          cout << endl;
     }
}

void squareValue(){
	cout << "Input value: ";
	float input;
	cin >> input;
	system("CLS");
	cout << "Num     Square";
	cout << endl;
	for(int i = 1; i <= input; i++){
		cout << i;
		std::cout << std::setfill ('.') << std::setw(10);
		cout << pow(i,2);
		cout << endl;
	}
}

int main(){
	while(true){
		cout << "WELCOME!" << endl << "Please select one of the following function:" << endl
			<< "1) Kilograms to Pounds \n2) Celcius to Kelvin \n3) Teaspoons to Millilitres \n4) Multiplication Table \n5) Squares Table \nX) Exit" << endl
			<< endl << "Enter Option: ";

		char userInput;
		cin >> userInput;
		if(userInput == 'x'){
			return false;
		}
		else if(userInput == '1'||
			userInput == '2'||
			userInput == '3'||
			userInput == '4'||
			userInput == '5'){
			char dInput = 'y';
			do{
				switch (userInput){
				case '1':
					float i;
					cout << "Input value: ";
					cin >> i;
					cout << KilotoPound(i) << endl;
					cout << "Would you like to try again? (Y/N)" << endl;
					cin >> dInput;
					if(dInput == 'y')
						break;
					else if(dInput == 'n'){
						dInput = false;
						system("CLS");
						break;
						}
				case '2':
					cout << "Input value: ";
					cin >> i;
					cout << CeltoKel(i) << endl;
					cout << "Would you like to try again? (Y/N)" << endl;
					cin >> dInput;
					if(dInput == 'y')
						break;
					else if(dInput == 'n'){
						dInput = false;
						system("CLS");
						break;
						}
				case '3':
					cout << "Input value: ";
					cin >> i;
					cout << TeatoMill(i) << endl;
					cout << "Would you like to try again? (Y/N)" << endl;
					cin >> dInput;
					if(dInput == 'y')
						break;
					else if(dInput == 'n'){
						dInput = false;
						system("CLS");
						break;
						}
				case '4':
					multiTable();
					cout << "Would you like to try again? (Y/N)" << endl;
					cin >> dInput;
					if(dInput == 'y')
						break;
					else if(dInput == 'n'){
						dInput = false;
						system("CLS");
						break;
						}
				case '5':
					squareValue();
					cout << "Would you like to try again? (Y/N)" << endl;
					cin >> dInput;
					if(dInput == 'y')
						break;
					else if(dInput == 'n'){
						dInput = false;
						system("CLS");
						break;
						}
				}
			}while(dInput == 'y');
		}
		else{
			cerr << "Invalid input!" << endl;
			_sleep(1000);
			system("CLS");
		}
	}
	return 0;
}