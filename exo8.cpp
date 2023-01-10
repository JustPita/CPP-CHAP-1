/**********************************************

   Description: calcule somme n premier terme de la serie harmonique

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:57:33
 
************************************************/

#include <iostream>

using namespace std;


int main() {

    int n;
    double i = 1, s = 0.0;

    cout << "enter nb" << endl;
    cin >> n;

    while (i <= n) {
        s = s + 1/i;
        i++;
    }

    cout << s << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}