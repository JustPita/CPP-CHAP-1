/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S

using namespace std;
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Fibonacci
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void fibonacci(int* tab, int n=100)
{
	int a = 0;
	int b = 1;
	int i = 0;
	while (i < n)
	{
		tab[i] = b;
		i++;
		b = a + b;
		a = b;
	}

}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
	int valADonnee;

	cout <<"Nb MAX ? "<< endl;
	cin >> valADonnee;
	cout << fibonacci(valADonnee) << endl;

	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}