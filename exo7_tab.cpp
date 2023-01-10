/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S

using namespace std;
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Supprime
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
bool supprime(int* tab, int val, int n)
{
	bool trouve = false;
    for (int i = 0; i < n; i++)
    {
        if (tab[i] == val)
        {
            tab[i] = 0;
            trouve = true;
        }
        else if (tab[i] != val && trouve)
        {
            tab[i - 1] = tab[i];
            tab[i] = 0;
        }
    }
    return trouve;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
    int tab[] = { 5,9,4,2,8,11,3,1,22,7 }
    cout << supprime(tab, 3) << endl;

	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}