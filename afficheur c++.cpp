/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S

using namespace std;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAILLE_TAB 255

int main(int argc , char * argv[])
{
    char lettre[TAILLE_TAB]={0};
    int i=0;
    for (i=127;i<TAILLE_TAB;i++)
    {
        lettre[i]=i;
        printf("%c ",lettre[i]);
    }
    printf("%c",lettre[33]);

    return 0;
}