#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
    float x1, y1, x2, y2, R;

    cin >> x1 >> y1 >> x2 >> y2;

    R = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    cout <<  fixed << setprecision(4);
    cout << R << endl;

    return 0;
}
