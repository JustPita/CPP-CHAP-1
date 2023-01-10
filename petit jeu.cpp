/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S

using namespace std;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
	srand(time(NULL));


	unsigned short alea, nbUser,nbCoupsMax,nbCoups ;
	do {
		alea = rand();
	} while (alea > 100 || alea == 0);
	cout << "Coups Max ? " << endl;
	cin >> nbCoupsMax;
	nbCoups = 0;
	do {
		cout << "nbUser ?" << endl;
		cin >> nbUser;
		nbCoups = nbCoups + 1;

		if (nbUser < alea) {
			cout << "TROP PETIT" << endl;
		}
		else if (nbUser > alea) {
			cout << "TROP GRAND" << endl;
		}
		else {
			cout << "Gagner en " << nbCoups <<"Coup(s)" << endl;
		}
	} while (nbUser != alea and nbCoups <= nbCoupsMax-1);
	if (nbUser = alea) {

		cout << "Dommage le numero est " << alea << endl;
	}
	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}