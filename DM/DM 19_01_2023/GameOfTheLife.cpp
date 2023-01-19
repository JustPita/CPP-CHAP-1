/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :
16/01/2023
</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S
#include <string.h>
using namespace std;

const int DIM = 6;

int cellule[DIM][DIM] = { {1,0,0,1,1,0},
						{0,1,1,0,1,1},
						{1,1,1,0,1,1},
						{0,1,1,1,1,0},
	{1,1,0,1,0,0},{0,1,0,0,1,1} };
int save[DIM][DIM];


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction getNombreCellulesVivantes
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int getNombreCellulesVivantes()
{
	int vivant = 0;
	for (int i=0; i<DIM;i++) 
	{
		for (int j=0; i<DIM;j++)
		{
			if (cellule[i][j] == 1)
			{
				vivant++;
			}
			
		}
	}
	return vivant;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction copie
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void copie(bool sens)
{
	if (sens == true)
	{
		for (int i = 0; i < DIM; i++)
		{
			for (int j = 0; i < DIM; j++)
			{
				save[i][j] = cellule[i][j];
			}
		}
	}
	else if (sens == false)
	{
		for (int i = 0; i < DIM; i++)
		{
			for (int j = 0; i < DIM; j++)
			{
				cellule[i][j] = save[i][j];
			}
		}
	}
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction nombreVoisinsVivants
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int nombreVoisinsVivants(int i, int j)
{
	int nombreVoisins= 0;
	j++;
	i--;
	for (int x = 0; x < 8; x++)
	{
		if (cellule[i][j] == 1 || cellule[i][j] == 0)
		{
			if (j < DIM && i> -1 && j > -1 and i < DIM)
			{
				if (cellule[i][j] == 1)
					nombreVoisins++;
			}
		}
		if (x < 2)
			j--;
		if (x < 4 && x >= 2)
			i++;
		if (x < 6 && x >= 4)
			j++;
		if (x == 6)
			i--;
	}
	return nombreVoisins;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction etatSuivant
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int etatSuivant()
{
	int tmp;
	copie(true);

	for (int i = 0; i < DIM; i++)
	{
		for (int j = 0; i < DIM; j++)
		{
			tmp = nombreVoisinsVivants(i, j);
			if (tmp == 3 && cellule[i][j] == 0)
				save[i][j] = 1;
			else if (tmp == 2 && tmp == 3 && cellule[i][j] == 1)
				save[i][j] = 1;
			else
				save[i][j] = 0;
		}
	}

	copie(false);
	return getNombreCellulesVivantes();
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction affichage
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void affichage()
{
	for (int i = 0; i < DIM; i++)
	{
		for (int j = 0; i < DIM; j++)
		{
			cout << cellule[i][j];
			cout << " " << endl;
		}
	}
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{

	int n = etatSuivant();
	affichage();
	cout << getNombreCellulesVivantes() << endl;
	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}