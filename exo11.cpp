/**********************************************

   Description: 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-10-01 00:07:27
   Updated: 2022-10-01 00:07:29
 
************************************************/

#include <iostream>
using namespace std;

const double i = 0.5;

int main() {

    double h = 0.00, x = 0.0;
    // var 0.875

    cout << "entrer la hauteur en mm" << endl;
    cin >> h;

    x = h;

    while (true) {
        h = h * 0.875;

        x += h;

        if (h < i) {
            break;
        }
    }

    cout << "distance parcourue: " << x << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}