/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S
#include <string.h>
using namespace std;

void permut(char& a, char& b)
{
	char tmp = a;
	a = b;
	b = tmp;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
    char chaine[100 + 1];
    int i, j;

    //saisir la chaine de caractère au clavier.
    cout << "Saisir un phrase : ";
    gets_s(chaine);

    //
    //positionner correctement i et j au départ
    i = 0;
    j = 0;
    //      pour initialiser j, il faut incrémenter j tant qu'on ne tombe
    //      pas sur la marque de fin de chaine puis remonter j d'un cran
    /*
    do
        j++;
    while (chaine[j] != 0);*/

    j = strlen(chaine);
    j--;

    //répéter 
    //      inverser la case i et la case j
    //      descendre i
    //      remonter j
    //tant i et j ne se croisent pas
    do
    {
        permut(chaine[i], chaine[j]);
        i++;
        j--;
    } while (i < j);


	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}