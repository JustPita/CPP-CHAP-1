/**********************************************

   Description: Numero de sécu

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:56:19
 
************************************************/



#include <iostream>

using namespace std;


int main() {

	long long cle, nb;

	cout << "numero de secu :" << endl;
	cin >> nb;

	cle = 97 - (nb % 97);

	cout << "cle : " << cle << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}