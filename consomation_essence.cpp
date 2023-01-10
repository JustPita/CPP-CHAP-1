/**********************************************

   Description: Consomation essence

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:56:34
 
************************************************/



#include <iostream>

using namespace std;


int main() {

	double nbKms, nbLitres, conso;

	cout << "entrer nombre de kilometre puis essence en litre ajouter : ";
	cin >> nbKms >> nbLitres;

	conso = nbLitres * 100 / nbKms;

	cout << "consomation = " << conso << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}