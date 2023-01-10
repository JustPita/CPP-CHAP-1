/= ==============================
programme conversion de température °C->°F
Auteur : H MC
Date : Sept 2022
Version 2.0

On test si on est bien > au Zéro absolu
================================ = /

// iostream contient la déclaration des fonctions
// d'entrée/sortie que je vais utiliser
#include <iostream>        // entete de gestion des E/S

using namespace std;    // utilisation de l'espace de nommage de la bibliothèque standart

// Définition d'une constante : valeur qui ne change pas pendant tout le programme
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
    // Définition des variables
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

            // on affiche le résultat
            cout << Celsius << "\t" << fahrenheit << endl;
        }
    }
    // Attendons qu'on appuie sur une touche pour terminer
    cin.get(); cin.ignore();

    return EXIT_SUCCESS;
}