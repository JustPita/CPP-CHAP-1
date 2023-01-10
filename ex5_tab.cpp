/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S

using namespace std;
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction nombreDeValeursAAjouter
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int nombreDeValeursAAjouter(double* tab, double val)
{
    // Initialisation du compteur à 0
    int compteur = 0;

    // La somme des éléments du tableau
    double somme = 0;

    // Répétez les étapes suivantes jusqu'à ce que la somme soit supérieure ou égale à val
    while (somme < val)
    {
        // Ajoutez l'élément suivant du tableau à la somme
        somme += tab[compteur];

        // Incrémentez le compteur
        compteur++;
    }

    // Renvoyez le compteur
    return compteur;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{


	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}