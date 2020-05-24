#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int NF, HT;
    float VH, S;

    cin >> NF;
    cin >> HT;
    cin >> VH;

    S = HT * VH;

    cout << "NUMBER = " << NF << endl;
    cout << setprecision ( 2 ) << setiosflags (ios :: fixed) << "SALARY = U$ " << S << endl;

    return 0;

}
