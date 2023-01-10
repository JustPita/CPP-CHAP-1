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

	//Diminuer i jusqu'� trouver le caract�rer '/'
	do
	{
		i--;
	} while (cheminAvecFichier[i]!='/');

	memo = i; 

	for (i = 0; i < memo; i++)
	{
		//copier le caract�re de cheminAvecFichier dans repertoire
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
//	positionner i sur le dernier caract�re de cheminAvecFichier
//		|C|:|/|S|N|I|R|/|E|X|O|S|/|C|P|P|/|E|x|o|1|.|c|p|p|
//	Diminuer i jusqu'� ce que cheminAvecFichier[i] soit egual � '/'
//		                               |/|
//	memo <- i
//	copier tous les caract�res de (diff�rents de 0) � repertoire
//	ajouter un '\(diff�rents de 0)' � la fin de repertoire
//	copier tous les caract�res de memo+1 � la fin dans fichier
//	ajouter un '\(diff�rents de 0)' � la fin de fichier
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
	char cheminComplet[250 + 1], fich[50 + 1], rep[200 + 1];
	
	//Saisie au clavier du chemin complet avec des /
	//s�parateur
	cout << "Saisir le chemin complet : ";
	gets_s(cheminComplet);
	decompose(cheminComplet, rep, fich);
	cout << "Repertoire : " << rep << endl;
	cout << "Fichier : " << fich << endl;

	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}


