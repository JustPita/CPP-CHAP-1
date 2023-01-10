/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S

using namespace std;
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction getCidr
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
double getCidr(unsigned long long nombreHotes)
{
	double cidr;
	cidr = 32 - (log(nombreHotes + 2) / log(2));
	if (cidr > 1 and cidr < 30)
	{
		return cidr;
	}
	else
	{
		return -1;
	}
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
	unsigned long long nombreHotes;
	cout << "Saisir le nombre d'hotes : " << endl;
	cin >> nombreHotes;


	if (getCidr(nombreHotes) == -1)
	{
		cout << "Impossible de definir ce nombre d'hotes en IPV4" << endl; 
	}
	else
	{
		cout << "Le cidr que vous pouvez utiliser est " << getCidr(nombreHotes) << endl;
	}

	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}