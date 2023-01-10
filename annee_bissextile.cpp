/**********************************************

   Description: année bissextile

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:56:01
 
************************************************/



#include <iostream>

using namespace std;


int main() {

	int annee;

	cout << "entrer une annee :" << endl;
	cin >> annee;

	if (annee % 4 == 0) {
		if (annee % 100 == 0) {
			if (annee % 400 == 0) {
				cout << "l'annee " << annee << " est bissextile" << endl;
			}
			else {
				cout << "l'annee " << annee << " est pas bissextile" << endl;
			}
		}
		else {
			cout << "l'annee " << annee << " est bissextile" << endl;
		}
	}
	else {
		cout << "l'annee " << annee << " est pas bissextile" << endl;
	}

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}