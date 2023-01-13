/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S
#include <string.h>
using namespace std;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction |______|
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
	int chiffrePinDer[3][4] = { {6,9,5,2},{11,18,14,3},{4,9,11,15} };
	unsigned i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			cout << chiffrePinDer[i][j] << "\t";



			cout << endl;
	}

//______________________________________________________________________________________________________________
//|_____________________________________________________________________________________________________________|

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			cout << chiffrePinDer[j][i] << "\t";



		cout << endl;
	}

	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}