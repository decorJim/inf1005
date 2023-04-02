#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double number1;
	double number2;
	double number3;
	double powNumber1;
	double powNumber2;
	double powNumber3;
	bool verify;

	while 
	    cout << "Enter number 1:";
		cin >> number1;
		cout << "Enter number 2:";
		cin >> number2;
		cout << " Enter number 3:";
		cin >> number3;
		double powNumber1 = (number1*number1);
		double powNumber2 = (number2*number2);
		double powNumber3 = (number3*number3);
		
		if (powNumber1 + powNumber2 == number3 || powNumber1 + powNumber3 == number2 || powNumber2 + powNumber3 == number1) {
			bool verify = true;
			cout << "good";
		}
		else
		{
			cout << "fuck";
		}
	} while (false);
	
	/*do while (verify = false) {
		cout << "Enter number 1:";
		cin >> number1;
		cout << "Enter number 2:";
		cin >> number2;
		cout << " Enter number 3:";
		cin >> number3;
		double powNumber1 = (number1*number1);
		double powNumber2 = (number2*number2);
		double powNumber3 = (number3*number3);
		verify = powNumber1 + powNumber2 == number3 || powNumber1 + powNumber3 == number2 || powNumber2 + powNumber3 == number1;
		if (verify) {
			cout << "good";
		}
		else {
			cout << "fuck";
		}
	}*/
	system("pause");
	return 0;
}