/**********************************************
SARRITZU Peter
On W10

created: 11/10/2022 
************************************************/

#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    double max = 0, moy_add = 0, moy, val, min = val;
    int tabs = 0;
    vector<double> tab {};
    cout << "entrer vos nombre, type -1 top  stop" << endl;

    while (true) {
        double nb;
        cin >> nb;

        if (nb == -1) {
            break;
        }

        tab.push_back(nb);
    }

    while (tab[tabs] != '\0') {
        tabs++;
    }

    for (int i = 0 ; i != tabs ; ++i) {
        if(tab[i] > max) {
            max = tab[i];
        }
        if (tab[i] < min) {
            min = tab[i];
        }
        moy_add += tab[i];
    }

    moy = moy_add / tabs;

    cout << "moyenne: " << moy << "; max: " << max << "; min: " << min << endl;

    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}
