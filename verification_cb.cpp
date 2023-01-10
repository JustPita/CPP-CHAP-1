/**********************************************

   Description: verification cle cb

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:56
 
************************************************/

#include <iostream>
#include <string>
using namespace std;


int main() {

	string buff;
	string res;
	int p = 0;
	int i = 0;
	int pc;

	cout << "code cb" << endl;
	cin >> buff;
	pc = buff[15] - '0';

	while (i != 10) {
		if (((buff[i] - '0') * 2) > 9) {
			buff[i] = ((buff[i] - '0') * 2) - 9;
			// res[i] = buff[i] + '0';
		} else {
			buff[i] = ((buff[i] - '0') * 2);
		}
		i++;
		i++;
	}

	cout << res[0] << endl;

	for (int y = 0; y != 14; y++) {
		p = p + buff[y];
	}

	p = p % 10;

	if (p != 0) {
		p = 10 - p;
	}

	if (pc == p) {
		cout << "carte valide" << endl;

	} else {
		cout << "carte non valide" << endl;
	}

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}