#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
	
	const int size = 20;
	int tableau[size];
	int nombre;
	int* ptrnombre;
	
	
	cout << "Entrer un nombre";
	for (int i = 0; i <size ; i++) {
		cin >> nombre;
		tableau[i]=nombre;
		cout << "t" << tableau[i] << "t" << endl;
		ptrnombre = &nombre;
		cout << *ptrnombre << endl;
	}
	


	system("pause");
	return 0;
}