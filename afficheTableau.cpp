/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction affichage(Tableau)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

void affichage(int* tab, int nombreDeCases)
{
	cout << "contenue du tableau " << endl;
	for (unsigned i = 0; i < nombreDeCases; i++)
	{
		cout << tab[i] << "  ";
	}
	cout << endl;
}