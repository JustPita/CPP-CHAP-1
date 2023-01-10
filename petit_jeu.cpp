/**********************************************

   Description: 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-10-04 17:41:10
   Updated: 2022-10-04 18:30:32
 
************************************************/


#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int coup, x, y = 0;
    srand(time(NULL));
    int nb = rand() % 100 + 1;

    cout << "nombre de coup max: " << endl;
    cin >> coup;

    while (true) {

        if (y == coup) 
            return EXIT_SUCCESS;

        cout << "\nentrer un nombre: " << endl;
        cin >> x;

        if (x == nb) {
            cout << "trouver" << endl;
            break;
        } else if (x < nb) {
            cout << "plus grand" << endl;
        } else {
            cout << "plus petit" << endl;
        }
        y++;
    }

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}