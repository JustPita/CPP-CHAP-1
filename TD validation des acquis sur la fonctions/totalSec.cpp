/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>	//entete de gestion des E/S
#include <Windows.h> // pour afficher les accents (inclure <windows.h>)

using namespace std;


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Moyenne
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int totalSec(int result,int h, int m, int s) {
	return result = (h * 3600) + (m * 60) + s;

}
int totalSec(int result, int h, int m) {
	return result = (h * 3600) + (m * 60);
}
int totalSec(int result, int h) {
	return result = (h * 3600);
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main(){
	SetConsoleOutputCP(1252);

	bool ok;
	int h, m, s, result;

	result = totalSec(result, 5);
	if (ok == true) cout << "5 heures correspondent à " << result << " secondes" << endl;
	else cout << "Les minutes ou secondes fournies ne sont pas comprises entre 0 et 59" << endl;

	result = totalSec(result, 5, 33);
	if (ok == true) cout << "5 heures et 33 minutes correspondent à " << result << " secondes" << endl;
	else cout << "Les minutes ou secondes fournies ne sont pas comprises entre 0 et 59" << endl;

	result = totalSec(result, 5, 33, 14);
	if (ok == true) cout << "5 heures 33 minutes et 14 secondes correspondent à " << result << " secondes" << endl;
	else cout << "Les minutes ou secondes fournies ne sont pas comprises entre 0 et 59" << endl;

	result=totalSec(result, 5,63,14);
	if (ok == true)
			cout << "5 heures 63 minutes et 14 secondes correspondent à " << result << " secondes" << endl;
	else    cout << "Les minutes ou secondes fournies ne sont pas comprises entre 0 et 59" << endl;

	cin.get(); cin.ignore();
	return EXIT_SUCCESS;
}