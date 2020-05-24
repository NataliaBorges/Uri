#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double A, B, C, R;

    cin >> A;
    cin >> B;
    cin >> C;

    R = (A*2 + B*3 + C*5)/10;

    cout << setprecision(1) << setiosflags(ios::fixed) <<"MEDIA = " << R << endl;

    return 0;
}
