/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S

using namespace std;
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Moyenne
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
double moyenne(int nbDeResultats,double x,double y,double z=10)
{
	if (nbDeResultats = 2) {
		return x + y / 2;
	}
	else if (nbDeResultats = 3) {
		return x + y+ z / 3;
	}
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
	int nbDeResultats = 0;
	double x, double y, double z;
	cout << "Vous voulez faire la moyenne de 2 ou 3 nombres ? " << endl;
	if (nbDeResultats = 2)
	{
		cin >> nbDeResultats;
	}
	else if (nbDeResultats = 3)
	{
		cin >> nbDeResultats;
	}
	else
	{
		cout << "MERCI DE SAISIR 2 OU 3 !" << endl; 
	}

	switch (nbDeResultats)
	{
		case'2':
			cout << "Saisir x et y : " << endl;
			cin >> x, y; 
			cout << "Moyenne=" << moyenne(nbDeResultats, x, y) << endl;
			break;
		case '3':
			cout << "Saisir x, y et z : " << endl;
			cin >> x, y, z;
			cout << "Moyenne=" << moyenne(nbDeResultats, x, y, z) << endl;
			break;
	}


	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}