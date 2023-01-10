/*======================================================
 programme de etst des tableaux compatible C
 Auteur: Vejux
 Date:06/12/2022
 version:1.0
========================================================*/


#include <iostream>  // entete de gestion des E/S

using namespace std; 

void affichage(int* kirikou, int nombreDeCases);
void saisie(int* kirikou, int nombreDeCases);



void saisie(int* kirikou, int nombreDeCases)
{
	for (unsigned i = 0; i < nombreDeCases; i++)
	{
		cout << "saisir la case numero " << i << " : ";
		cin >> kirikou[i];
	}

}




void affichage(int* kirikou, int nombreDeCases)
{
	cout << "contenue du tableau " << endl;
	for (unsigned i = 0; i < nombreDeCases; i++)
	{
		cout << kirikou[i] << "  ";
	}
	cout << endl;
}

int main()
{
	int tab1[5];

	int tab2[5] = { 12, 7, 8, 54, 9 };

	int tab3[5] = { 0 };

	saisie(tab1, 5);
	affichage(tab1, 5);

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}
