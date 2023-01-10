/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :
    13/12/2022
</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S

using namespace std;
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Fusion
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void fusion(int* tab1, double* tab2, double* tabFinal)
{
    int i = 0, j = 0;
    while (i < 10 && j < 10)
    {
        if (tab1[i] < tab2[j])
        {
            tabFinal[i + j] = tab1[i];
            i++;
        }
        else
        {
            tabFinal[i + j] = tab2[j];
            j++;
        }
    }
    while (i < 10)
    {
        tabFinal[i + j] = tab1[i];
        i++;
    }
    while (j < 10)
    {
        tabFinal[i + j] = tab2[j];
        j++;
    }
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
    fusion(,,)
    cin.get(); cin.ignore();
    return EXIT_SUCCESS;
}