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
Fonction premi�re occurence
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int premiereOccurence(char chaine1[],char chaine2[])
{
    int i = 0;
    int j = 0;

    if (strlen(chaine2) > strlen(chaine1))
    {
        cout << "La cha�ne cherch�e est plus longue que la cha�ne de d�part" <<endl;
        return 0;
    }
    while (i < strlen(chaine1))
    {
        if (chaine1[i] == chaine2[j])
            j++;
        if (j == strlen(chaine2))
        {
            cout << "Le mot " << chaine2 << " se trouve � la position " << (i - j + 1) << " dans la phrase" <<endl;
            return 0;
        }
        i++;
        j = 0;
    }
    cout << "La cha�ne cherch�e n'a pas �t� trouv�e dans la cha�ne de d�part" <<endl;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
    char chaine1[] = "LES SN1 AIMENT LE LANGAGE C++";
    char chaine2[] = "LANGAGE";
    premiereOccurence(chaine1,chaine2)


	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}