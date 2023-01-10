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
	double coteA, coteB, coteC,perimetre,tmp,aire;
	cout << "cot� 1 ?" << endl;
	cin >> coteA;
	cout << "cot� 2 ?" << endl;
	cin >> coteB;
	cout << "cot� 3 ?" << endl;
	cin >> coteC;
	perimetre = (coteA + coteB + coteC) / 2;
	tmp = perimetre * (perimetre - coteA) * (perimetre - coteB) * (perimetre - coteC);
	if (tmp < 0)
	{
		cout << "Erreur de saisie" << endl;
	}
	else
	{
		aire = sqrt(tmp);
		cout << "L'aire est de " << aire << "cm2" << endl;
	}
	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}