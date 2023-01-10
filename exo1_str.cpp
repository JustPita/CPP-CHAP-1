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
Fonction Decompose
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void decompose(char* cheminAvecFichier, char* repertoire, char* fichier)
{
	int i = 0, j = 0, memo;

	do
		i++;
	while (cheminAvecFichier[i] != 0);
	i--;

	//Diminuer i jusqu'à trouver le caractèrer '/'
	do
	{
		i--;
	} while (cheminAvecFichier[i]!='/');

	memo = i; 

	for (i = 0; i < memo; i++)
	{
		//copier le caractère de cheminAvecFichier dans repertoire
		repertoire[i] = cheminAvecFichier[i];
	}
	repertoire[i] = 0;

	i = memo + 1;
	do
	{
		fichier[j] = cheminAvecFichier[i];
		i++;
		j++;
	} while (cheminAvecFichier[i] != 0);

	fichier[j] = 0;

//debut
//	positionner i sur le dernier caractère de cheminAvecFichier
//		|C|:|/|S|N|I|R|/|E|X|O|S|/|C|P|P|/|E|x|o|1|.|c|p|p|
//	Diminuer i jusqu'à ce que cheminAvecFichier[i] soit egual à '/'
//		                               |/|
//	memo <- i
//	copier tous les caractères de (différents de 0) à repertoire
//	ajouter un '\(différents de 0)' à la fin de repertoire
//	copier tous les caractères de memo+1 à la fin dans fichier
//	ajouter un '\(différents de 0)' à la fin de fichier
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
	char cheminComplet[250 + 1], fich[50 + 1], rep[200 + 1];
	
	//Saisie au clavier du chemin complet avec des /
	//séparateur
	cout << "Saisir le chemin complet : ";
	gets_s(cheminComplet);
	decompose(cheminComplet, rep, fich);
	cout << "Repertoire : " << rep << endl;
	cout << "Fichier : " << fich << endl;

	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}


