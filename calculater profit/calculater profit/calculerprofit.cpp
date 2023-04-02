#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

struct Produit {
	int numeroP;
	string name;
	int size;
	int number;
	double price;
};

int main() {
	int choix;
	cout << "Entrer choix 1.sauvegarder prix   ou   2.trouver prix:";
	cin >> choix;
	{
		if (choix == 1)
		{
			Produit p;
			cout << "Entrer le numero desire 1.Bierre 2.Cigarette" << endl;
			cout << "Entrer le nom, la grandeur(1.petit 2.moyen 3.grand), le nombre, le type(can ou b) et le prix du produit:";
			cin >> p.numeroP >> p.name >> p.size >> p.number >> p.price;
			
			fstream fichier("prix.txt",ios_base::out | ios_base::app);
			fichier << p.numeroP<< p.name << p.size << p.price << p.number << endl;
	
		}

		if (choix == 2)
		{
			int numeroProduit;
			cout << "Entrer le numero correspondant au produit:" << endl;
			cout << "1. Bierre" << endl;
			cout << "2. Cigarette" << endl;
			cin >> numeroProduit;

			char lettre;
			cout << "Entrer la premiere lettre du produit:";
			cin >> lettre;

			int nombre;
			cout << "Entrer le nombre de produit:";
			cin >> nombre;

			int grandeur;
			cout << "Entrer le format 1.petit 2.moyen 3.grand :";
			cin >> grandeur;
			

			Produit p1[500];
			ifstream fichierlu("prix.txt");
			int i = 0;
			while (!ws(fichierlu).eof())
			{
				fichierlu >> p1[i].numeroP >> p1[i].name >> p1[i].size >> p1[i].number >> p1[i].price;
				if (p1[i].numeroP == numeroProduit && p1[i].name[0] == lettre && p1[i].number == nombre && p1[i].size==grandeur)
				{
					cout << p1[i].numeroP << " " << p1[i].name << "    (1.petit 2.moyen 3.grand):" << p1[i].size << " x" << p1[i].number << " " << p1[i].price << endl;
					i++;
				}
			}
			
			
		}
	}
	return 0;
}