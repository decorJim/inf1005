#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double DistanceOrigine(int a,double x, double y, double z, double* distance) {
	double longueur = sqrt((x*x) + (y*y) + (z*z));

	return 0;
}



int main() {
	int nombreDePoint;
	double x, y, z;
	double Min = LONG_MAX;
	int a;
	
	

	cout << "Entrer le nombre de point:";
	cin >> nombreDePoint;

	double* tableau = new double[3*nombreDePoint];

	for ( int i = 0; i < nombreDePoint; i++) {
		cin >> tableau[3 * i] >> tableau[(3 * i) + 1] >> tableau[(3 * i) + 2];
		double distance = sqrt((tableau[3*i]*tableau[3*i]) + (tableau[(3*i)+1]*tableau[(3*i)+1]) + (tableau[(3*i)+2]*tableau[(3*i)+2]));
		if (distance < Min) {
			Min=distance;
			a = i+1;
		}
		
	}
	cout << a <<" "<< Min << endl;

	system("pause");
	return 0;
}