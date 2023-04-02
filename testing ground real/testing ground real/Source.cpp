#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main() {
	struct joueur {
		char blanc;
		char noir;
	};

	struct blanc {
		char b;
	};

	struct noir {
		char n;
	};

	const int nbColonnes = 5;
	const int nbLignes = 4;

	char tableau[nbColonnes][nbLignes];

	for (int i = 0; i < nbColonnes; i++) {
		for (int j = 0; j < nbLignes; j++) {
			cout << tableau[i][j] << endl;
			if (tableau[i][j] == tableau[2][1]) {
				tableau[i][j] = joueur.blanc.b;
			}
			if (tableau[i][j] == tableau[2][2]) {
				tableau[i][j] = joueur.blanc.b;
			}
			if (tableau[i][j] == tableau[2][3]) {
				tableau[i][j] = joueur.noir.n;
			}
			if (tableau[i][j] == tableau[2][4]) {
				tableau[i][j] = joueur.blanc.b;
			}
		}
	}

	system("pause");
	return 0;
}