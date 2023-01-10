/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SUUUUUUUUUUUUUUUUU
SUUUUUUUUUUUUUUUUUI
MOHAMMED SALAH !!!

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S

using namespace std;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
	double nbKms, nbLitres, conso;
	cout << "Entre le nombre de Km " << endl;
	cin >> nbKms;
	cout << "Entre le nombre de litres " << endl;
	cin >> nbLitres;
	conso = nbLitres*100/nbKms;
	cout << "la consomation du vehicule est de " << conso << " l/100" << endl;
	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}