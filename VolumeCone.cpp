/**********************************************

   Description: Volume Cone

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:59:19
 
************************************************/

#include <iostream>

using namespace std; // utilisation de l'espace de nomage
					 // de la biblioteque standard

const double PI = 3.14159;

int main(void) {
	double rayon, hauteur, volume;

	cout << "rayons de la base : " << endl << flush;
	cin >> rayon;
	cout << "hauteur cone : " << endl << flush;
	cin >> hauteur;

	volume = PI * rayon * rayon * hauteur / 3.0;

	cout << "volume de cone de rayon : " << rayon << " et de hauteur"
		<< hauteur << " est " << volume << endl;


	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}