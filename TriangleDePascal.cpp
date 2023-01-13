/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :
12.01.2023
</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S
#include <string.h>
using namespace std;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Triangle de Pascal
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

/*
*/

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
	int triangle[20][20] = { 0 };
	int n;
	int i, j;

	cout << "Saisir n : ";
	cin >> n;

	//etape 1: Mettre des 1 dans la premièrer colonne (on s'arrête à n)
	for (i = 0; i <= n; i++)
	{
		triangle[i][0] = 1;

	}
	//etape 2: Mettre des 1 sur la diagonale
	for (i = 1; i <= n; i++)
	{
		triangle[i][i] = 1;
	}
	//etape 3: remplir les cases internes 
	for (i = 2; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];
		}
	}
	//etape 4: afficher le triangle
	for (i = 0; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			cout << triangle[i][j] << "\t";
		cout << endl;
	}


	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}