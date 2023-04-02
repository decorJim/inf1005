#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main() {
	ifstream fichier("tgfb32.txt");

	int compteur = 0;
	string lettre;
	double somme = 0;
	double charge = 0;
	int nbW = 0;
	int nbY = 0;
	while (!ws(fichier).eof())
	{
		fichier >> lettre;
		if (lettre == "g")
		{
			somme = somme + 75;
		}
		if (lettre == "a")
		{
			somme = somme + 89.1;
		}
		if (lettre == "v")
		{
			somme = somme + 117.1;
		}
		if (lettre == "l")
		{
			somme = somme + 131.2;
		}
		if (lettre == "m")
		{
			somme = somme + 149.2;
		}
		if (lettre == "p")
		{
			somme = somme + 115.1;
		}
		if (lettre == "f")
		{
			somme = somme + 165.2;
		}
		if (lettre == "w")
		{
			somme = somme + 204.2;
			nbW++;

		}
		if (lettre == "s")
		{
			somme = somme + 105.1;
		}
		if (lettre == "t")
		{
			somme = somme + 119.1;
		}
		if (lettre == "n")
		{
			somme = somme + 132.1;
		}
		if (lettre == "q")
		{
			somme = somme + 146.1;
		}
		if (lettre == "y")
		{
			somme = somme + 181.2;
			nbY++;
		}
		if (lettre == "c")
		{
			somme = somme + 121.1;
		}
		if (lettre == "k")
		{
			somme = somme + 146.2;
			charge = charge + ((1 * 97.9) / 100) + (-1) + 1;
		}
		if (lettre == "r")
		{
			somme = somme + 174.2;
			charge = charge + ((1 * 97.5) / 100) + (-1) + 1;
		}
		if (lettre == "h")
		{
			somme = somme + 155.1;
			charge = charge + ((1 * 98.84) / 100) + (-1) + ((1 * 9.1) / 100);
		}
		if (lettre == "d")
		{
			somme = somme + 133.1;
			charge = charge + 1 - 1 - 1;
		}
		if (lettre == "e")
		{
			somme = somme + 147.1;
			charge = charge - 1 - 1;
		}
		compteur++;
	}
	cout << compteur << endl;
	cout << somme <<" "<<charge<< endl;
	cout << "W:" << nbW << " " << "Y:" << nbY << endl;
	

	return 0;

}