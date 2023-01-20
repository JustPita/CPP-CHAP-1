/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created : 
20/01/2023|13:47
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
	int i,j,vivant = 0;
	for (i=0; i<DIM;i++) 
	{
		for (j=0; i<DIM;j++)
		{
			vivant += cellule[i][j];
			
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
				if (sens)
                    save[i][j] = cellule[i][j];
                else
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
	int imin=i-1 , imax=i+1 , jmin=j-1 , jmax=j+1;

    if (imin<0) imin=0;
    if (jmin<0) jmin=0;
    if (imax >= DIM) imax=DIM-1;
    if (jmax >= DIM) jmax=DIM-1;

    nombreVoisins-=cellule[i][j];

	for (i=imin;i<=imax;i++)
        for (j=jmin; j<=jmax;j++)
            nombreVoisins+=cellule[i][j];
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
			if (cellule[i][j]==0 && tmp==3) save[i][j]=1;
            if (cellule[i][j]==1 && tmp<2) save[i][j]=0;
            if (cellule[i][j]==1 && tmp>3) save[i][j]=0;
        }
	}

	copie(false);
	return getNombreCellulesVivantes();
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}