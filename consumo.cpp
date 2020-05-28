#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int X;
    float Y, R;

    cin >> X >> Y;

    R = X / Y;

    cout << fixed << setprecision(3);
    cout << R << " km/l" << endl;

    return 0;
}
