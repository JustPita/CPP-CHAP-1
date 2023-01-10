/**********************************************
SARRITZU Peter
On W10

created: 10/10/2022
************************************************/



#include <iostream>
using namespace std;

int main() {

    int nb;

    cout << "Entre un chiffre/nombre :" << endl;
    cin >> nb;

    for (int i = 0; i != nb; i++) {
        cout << "*";
    }
    cout << "\n";

    for (int a = 0; a != nb - 2; a++) {
        cout << "*";
        for (int y = 0; y != nb - 2; y++) {
            cout << " ";
        }
        cout << "*";
        cout << "\n";
    }

    for ()
	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}