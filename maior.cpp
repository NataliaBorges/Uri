#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int A, B, C, R, R1;

    cin >> A >> B >> C;

    R = (A + B + abs(A - B))/2;
    R1= (R + C + abs(R - C))/2;

    cout << R1 << " eh o maior" << endl;

    return 0;
}

