#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int x;
	cout << "Enter x:";
	cin >> x;
	for (int i = x ; i >= 1; i--) { //5
		for (int j = 0; j <= i; j++) {  //1 cout " " 
			cout << "1";
		}
		for (int j = 0; j <= 2*(x - i); j++) { //(2*(5-5)=0) cout *
			cout << "*";
		}
		for (int j = 0; j <= i; j++) {  //1 cout " " 
			cout << "1";
		}
		cout << endl; //skip line
	}
	
	
	
	int num1;
	int num2;
	int compteur = 1;
	int somme;

	cout << "Enter first number:";
	cin >> num1;
	cout << "Enter second number:";
	cin >> num2;

	somme = num1;
	while (compteur < num2) {
		somme = somme + num1;
		compteur++;
	}
	cout << somme << endl;


	system("pause");
	return 0;
}