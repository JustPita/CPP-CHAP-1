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
    // Initialisation du compteur � 0
    int compteur = 0;

    // La somme des �l�ments du tableau
    double somme = 0;

    // R�p�tez les �tapes suivantes jusqu'� ce que la somme soit sup�rieure ou �gale � val
    while (somme < val)
    {
        // Ajoutez l'�l�ment suivant du tableau � la somme
        somme += tab[compteur];

        // Incr�mentez le compteur
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