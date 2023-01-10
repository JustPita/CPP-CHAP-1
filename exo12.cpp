/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>
using namespace std;

int main() {


    int n;
    int x;
    int i = 0;
    char res[32000];
    int y = 0;

    cout << "enter nb:" << endl;
    cin >> n;

    x = n;

    while (true) {
        if (n == 0) {
            break;
        }

        n = n / 2;

        if (x == (n * 2)) {
            res[i] = '0';
        }
        if (x == (n * 2) + 1) {
            res[i] = '1';
        }
        x = n;
        i++;
    }

    while (res[y] != '\0') {
        y++;
    }

    y--;

    char nstr[32000];
    

    for (int i = 0; res[i] != '\0'; i++) {
        nstr[i] = res[y];
        y--;
    }

    nstr[y] = '\0';

    cout << nstr << endl;


	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}