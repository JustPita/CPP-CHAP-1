/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S

using namespace std;
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Mediane
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
double mediane(double* tab, int n) {
    // Vérifier si n est pair ou impair
    if (n % 2 == 0) {
        // Si n est pair, renvoyer la moyenne des 2 valeurs centrales
        return (tab[n / 2] + tab[n / 2 - 1]) / 2;
    }
    else {
        // Si n est impair, renvoyer la valeur centrale
        return tab[n / 2];
    }
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
    // Créer un tableau de 5 valeurs triées
    double tab[5] = { 1, 2, 3, 4, 5 };

    // Appeler la fonction mediane() avec le tableau et le nombre de valeurs en arguments
    double mediane = mediane(tab, 5);

    // Afficher la médiane du tableau
    std::cout << mediane << std::endl;

	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}