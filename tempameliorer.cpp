/= ==============================
programme conversion de temp�rature �C->�F
Auteur : H MC
Date : Sept 2022
Version 2.0

On test si on est bien > au Z�ro absolu
================================ = /

// iostream contient la d�claration des fonctions
// d'entr�e/sortie que je vais utiliser
#include <iostream>        // entete de gestion des E/S

using namespace std;    // utilisation de l'espace de nommage de la biblioth�que standart

// D�finition d'une constante : valeur qui ne change pas pendant tout le programme
const double ZERO_ABSOLU = -273.15;

/= ==============================
Fonction principale
================================ = /
/// test1
/// test2
/// test3
/// test4
int main()
{
    // D�finition des variables
    double Celsius, fahrenheit, min, max, pas;

    // Saisir au clavier de la temperature en celcius
    cout << "Saisir mini, maxi et pas : ";
    cin >> min >> max >> pas; // Clavier => Variables
    cout << "CELIUS \t FAHRENHEIT" << endl;
    cout << "__" << endl;
    for (Celsius = min; Celsius <= max; Celsius += pas)
    {
        if (Celsius < ZERO_ABSOLU)
        {
            cout << "Impossible de descendre sous le zero absolu " << endl;
        }
        else
        {
            // On calcule la temperature en fahrenheit
            fahrenheit = 9.0 / 5.0 * Celsius + 32.0;

            // on affiche le r�sultat
            cout << Celsius << "\t" << fahrenheit << endl;
        }
    }
    // Attendons qu'on appuie sur une touche pour terminer
    cin.get(); cin.ignore();

    return EXIT_SUCCESS;
}