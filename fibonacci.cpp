/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SARRITZU Peter
On W10
created :

</La programmation a du bon>
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include <iostream>	//entete de gestion des E/S

using namespace std;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Fibonacci
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void fibonacci(int * tab, int n) {
  tab[0] = 0;
  tab[1] = 1;
  for (int i = 2; i < n; i++) {
    tab[i] = tab[i - 1] + tab[i - 2];
  }
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Fonction Principale
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
int main() {
  int n = 10;
  int tab[n];
  fibonacci(tab, n);
  for (int i = 0; i < n; i++) {
    cout << tab[i] << " ";
  }
  return 0;
}
