/**********************************************

   Description: Aire d'un triangle

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:54:34
 
************************************************/

#include <iostream>
#include <math.h>

using namespace std;


int main() {

	double a, b, c, p, tmp, aire;

	cout << "entrer longeur cote triangle : " << endl;
	cin >> a >> b >> c;

	p = (a + b + c) / 2;
	tmp = p * (p - a) * (p - b) * (p - c);

	if (tmp < 0) {
		cout << "erreur de saisie" << endl;
	}
	else {
		aire = sqrt(tmp);
		cout << "\n\naire = " << aire << endl;
	}

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}