#include <iostream>
using namespace std;

int main()
{
	for (int i = 5; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
			if (j < 5) {
				cout << " ";
			}
			if (j >= 5) {
				cout << "*";
			}
		}
		cout << "\n";
	}
	
	
	
	int nombre_entier;
	cout << "Enter number:";
	cin >> nombre_entier;
	int tampon = nombre_entier;
	while (nombre_entier != 1) {
		nombre_entier = nombre_entier - 1;
		tampon = (tampon*nombre_entier);
	}
	
	cout << tampon << endl;
	system("pause");
	return 0;
}
	