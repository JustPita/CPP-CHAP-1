/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S
using namespace std;


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
	char chaine[] = "TOTO",
		mot[50 + 1],
		phrase[200 + 1];

	chaine[1] = 'A';
	chaine[3] = 65;

	cout << "chaine =" << chaine << endl;

	//saisi d'une chaine de caractère au clavier
	cout << "saisir un mot : ";
	cin >> mot;
	cout << "tu as saisi : " << mot << endl;

	//vider le buffer clavier
	cin.seekg(0, ios::end); cin.clear();

	//saisi d'une phrase
	gets_s(phrase);
	cout << "La phrase saisie est : " << phrase << endl;

	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}