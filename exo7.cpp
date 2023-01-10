/**********************************************

   Description: calcule 100 premier nombre impaire

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:57:01
 
************************************************/



#include <iostream>

using namespace std; // utilisation de l'espace de nomage
					 // de la biblioteque standard


int main() {

    int i = 1;
    int y = 1;

    while (i != 101) {
        y = y + i;
        i += 2;
    }

    cout << y << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}