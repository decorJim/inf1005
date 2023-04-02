#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	double prixArticle;
	double montantClient;

	cout << "Entrer le prix de l'article:";
	cin >> prixArticle;

	cout << "Entrer le montant donné par le client:";
	cin >> montantClient;

	double changeTotal = montantClient - prixArticle;

	int newChangeTotal = changeTotal;

	int billetDeCents = newChangeTotal / 100;
	int billetDeCinquantes = (newChangeTotal % 100) / 50;
	int billetDeVingts = ((newChangeTotal % 100) % 50) / 20;
	int billetDeDix = ((((newChangeTotal) % 100) % 50) % 20) / 10;
	int billetDeCinqs = (((((newChangeTotal) % 100) % 50) % 20) % 10) / 5;
	int monnaieDeDeux = ((((((newChangeTotal) % 100) % 50) % 20) % 10) % 5) / 2;
	int monnaieDeUn = (((((((newChangeTotal) % 100) % 50) % 20) % 10) % 5) % 2) / 1;

	int petitMonnaie = (changeTotal - newChangeTotal)*100;

	int monnaieVingtCinqs = petitMonnaie / 25;
	int monnaieDix = ((petitMonnaie) % 25) / 10;
	int monnaieCinq = (((petitMonnaie) % 25) % 10) / 5;
	int monnaieUn = ((((petitMonnaie) % 25) % 10) % 5);

	cout << "change en billets:" << billetDeCents << " billets de 100$," << billetDeCinquantes << " billets de 50$," << billetDeVingts << " billets de 20$,"
	<< billetDeDix << " billets de 10$," << billetDeCinqs << " billets de 5$" << endl;
	cout << "change en monnaies:" << monnaieDeDeux << " monnaie de 2$," << monnaieDeUn << " monnaie de 1$," << monnaieVingtCinqs <<
		" monnaie de 0,25$," << monnaieDix << " monnaie de 0,10$," << monnaieCinq << " monnaie de 0,05$," << monnaieUn << " monnaie de 0,01$" << endl;


	system("pause");
	return 0;
}