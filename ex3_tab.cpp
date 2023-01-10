/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S

using namespace std;
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction donnePosition
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int donnePosition(int* tab, int val) {
    // Parcourir le tableau pour trouver la valeur val
    for (int i = 0; i < 10; i++) {
        if (tab[i] == val) {
            // Si la valeur est trouvée, renvoyer sa position dans le tableau
            return i;
        }
    }

    // Si la valeur n'est pas trouvée, renvoyer -1
    return -1;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
    // Créer un tableau de 10 cases
    int tab[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Appeler la fonction donnePosition() avec la valeur 5 en argument
    int position = donnePosition(tab, 5);

    // Afficher la position de la valeur dans le tableau (ou -1 si elle n'a pas été trouvée)
    std::cout << position << std::endl;

	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}