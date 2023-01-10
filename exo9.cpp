/**********************************************

   Description: 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 18:58:01
 
************************************************/

#include <iostream>
#include <math.h>

using namespace std;


int main()
{

    int nb;
    double res = 1.0;

    cout << "enter nb" << endl;
    cin >> nb;

    for (int i = 0; i != nb; i++)
    {
        res = sqrt(1 + res);
    }

    cout << res << endl;

    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}
