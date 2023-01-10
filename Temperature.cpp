/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SUUUUUUUUUUUUUUUUU
SUUUUUUUUUUUUUUUUUI
MOHAMMED SALAH !!!

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S

using namespace std;



/*****************************************************************
FONCTION PRINCIPALE
****************************************************************/
int main(void)
{
	double celsius, farenheit; // définition de trois variables
	cout << "Entre la temperature en °C " << endl;
	cin >> celsius;
	if (celsius <-273.15)
		cout<<"il est impossible d'aller en dessous de -273,15 °C"<< endl;
	else
	{
		farenheit = (celsius * 1.8) + 32;
		cout << "La temperature en Celsius est de " << celsius << "°C ce qui donne "
			<< farenheit << "°F." << endl;

	} // sortie du programme avec succès. On peut aussi écrire : return EXIT_SUCCESS; 
	cin.get(); cin.ignore(); // appuyez sur ENTREE pour terminer
	return 0;
}