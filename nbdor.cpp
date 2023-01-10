/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S
#include <math.h>

using namespace std;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
	double nbUser, calcul, ancienResultat,i;

	cout << "Nb D'or ?" << endl;
	cin >> nbUser;
	ancienResultat = sqrt(1);
	calcul = 0;
	i = 0;
	for (i=0;i<=nbUser;i++) {
		calcul = sqrt(1 + ancienResultat);
	}
	cout << calcul << endl;
	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}