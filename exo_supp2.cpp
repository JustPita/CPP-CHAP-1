/**********************************************

   Description: trouver automatiquement un nombre qui est esgale a 11 fois ces chiffres

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:56
 
************************************************/

#include <iostream>
#include <string>

using namespace std;

int main() {

    int i = 1;
    int a = 0;
    int b = 0;
    int nb = 0;

    while (i != 99999) {
        a = i;
        b = i;
        while (b != 0) {
            a = a % 10;
            b = b / 10;
            nb = nb + a;
            a = b;
        }
        if (nb * 11 == i) {
            cout << "ok" << i;
            return EXIT_SUCCESS;
        }
        nb = 0;
        i++;
    }

    cout << nb *11 << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}

/*

*/


