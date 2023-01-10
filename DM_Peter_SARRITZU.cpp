/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created : 12/10/2022

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include <iostream>

using namespace std;

int main() {
	int rep = 1;
	int a = 0;
	int b = 0;
	int nb = 0;
	int nbATrouver = 11;

	while (rep != 99999) {
		a = rep;
		b = rep;

		while (b != 0) {
			a = a % 10;
			b = b / 10;
			nb = nb + a;
			a = b;
		}
		if (nb * nbATrouver == rep) {
			cout << "Nombre trouver: " << rep;
			return EXIT_SUCCESS;
		}
		nb = 0;
		rep++;
	}
	

	cout << nb * nbATrouver << endl;
	cin.get(); cin.ignore();
}