/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	
#include  <conio.h>
using namespace std;
int nombreChiffres(long n)
{
	int cpt = 0;
	do {
		n = n / 10;
		cpt++;
	} while (n != 0);

	return cpt;
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main()
{
	int val, res;

	cout << "saisir val:";
	cin >> val;
	
	res = nombreChiffres(val);
	cout << "Nombre de chiffres de " << val << "= " << res << endl;
}