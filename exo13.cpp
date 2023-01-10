/**********************************************

   Description: 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-10-01 17:38:56
   Updated: 2022-10-01 17:38:59
 
************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double nb, n, x;
    long long i = 0;
    x = 1;

    cout << "entrer un nombre puis une puissance" << endl;
    cin >> nb >> n;

    if (n >= 0) {
        while (i != n) {
            x = nb * x;
            i++;
        }
    }

    if (n <= 0) {   
        x = pow(nb, n);
    }

    cout << "res: " << x << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}