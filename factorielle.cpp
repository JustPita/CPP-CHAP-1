/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S

using namespace std;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction factorielle
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int factorielle(int chiffreDonne) {
	if (chiffreDonne<=1) {
		return 1;
	}
	else {
		return chiffreDonne * factorielle(chiffreDonne - 1);
	}

}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
	int chiffreDonne;
	cout << "Entrez la factorielle : " << endl;
	cin >> chiffreDonne;

	cout <<"la factorielle de "<<chiffreDonne<<" est egale a " << factorielle(chiffreDonne) << endl;
	
	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}