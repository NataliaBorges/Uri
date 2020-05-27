#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int CP1, NP1, CP2, NP2;
    float VU1, VU2, VP;

    cin >> CP1 >> NP1 >> VU1;
    cin >> CP2 >> NP2 >> VU2;

    VP = ((NP1 * VU1)+(NP2 * VU2));

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << VP << endl;

    return 0;

}
