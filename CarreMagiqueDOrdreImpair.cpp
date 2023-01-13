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
Fonction Carré Magique D'Ordre Impair
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
	int carre[21][21] = { 0 };
	int n, i, j, compteur;

	cout << "Saisir n (valeur impaire entre 1 et 19) : ";
	cin >> n;

	//Placer le 1 au dessus de la case centrale
	i = ((n/2)-1);
	j = (n/2);
	carre[i][j] = 1;

	for (compteur = 2; compteur <= n * n; n++)
	{
		//Aller au nord est
		//Modifier i ou(et) j pour les déplacer vers le nord est
		i--;
		j++;
		if (i < 0 && j >= n )
		{
			i--;
			j--;
		}
		//si les deux indices débordent
		//Faire un test sur i et j
		if (i < 0)
		{
			i += n;
		}
		if (j >= n)
		{
			j -= n;
		}
		//aller en Nord Ouest
		//déplacer i ou(et) j pour aller vers le nord ouest
		else if (carre[i][j] != 0)
		{
			i--;
			j--;

			if (i < 0)
				i += n;
			if (j >= n)
				j -= n;
		}
		carre[i][j] = compteur;
	} //fin de la boucle for
	//Afficher le carré magique
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			carre[i][j];
		}
	}



	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}