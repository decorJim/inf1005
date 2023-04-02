// Ce programme va g�n�rer un nombre au hasard entre 0 et 1 ensuite, il va calculer le sinus de cette valeur, l'approximation de cette valeur limit� � 3 termes et la diff�rence entre la valeur r�el et l'approximation
// Ce programme a �t� �crit par Victor Kim et Faisan Amd


#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;

int main() 
{

	double x = rand() % 100 / 100.0;
	cout << x << endl;

	double vrai_Valeur = sin(x);
	cout << "la vrai valeur est du sinus de "<< x <<" est:" << vrai_Valeur << endl;

	double deuxieme_Numerateur = pow(x, 3);      // il aurait �t� mieux de faire une boucle pour trouver tous les puissances au num�rateur avec un tableau
	double deuxieme_Denominateur = 3 * 2 * 1;    // il aurait �t� mieux de faire une bouble pour trouver tous les factorielles au d�nominateur avec un tableau
	double deuxieme_Terme = (deuxieme_Numerateur / deuxieme_Denominateur);

	double troisieme_Numerateur = pow(x, 5);
	double troisieme_Denominateur = 5 * 4 * 3 * 2 * 1;
	double troisieme_Terme = (troisieme_Numerateur / troisieme_Denominateur);

	double somme = x - deuxieme_Terme + troisieme_Terme; //il aurait �t� mieux de trouver tous les termes avec un tableau et une boucle
	cout << "L'approximation est:" << somme << endl;

	double difference = vrai_Valeur - somme;
	cout << "La diff�rence est des deux est:" << difference << endl;

	system("pause");
	return 0;
}