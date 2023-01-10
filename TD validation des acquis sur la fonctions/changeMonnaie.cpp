/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S

using namespace std;
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction changeMonnaie
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
double changeMonnaie(double somme, double tauxChange = 1.04, double sens=true)
{
	if (sens == true)
	{
		return somme * tauxChange;
	}
	else if (sens == false)
	{
		return somme / tauxChange;
	}
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
	cout << changeMonnaie(4.75) << endl;
	cout << changeMonnaie(5,1.41) << endl;
	cout << changeMonnaie(5,2.13,false) << endl;

	cin.get(); cin.ignore();
	return 0;
}