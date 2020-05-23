#include <stdio.h>

int main()
{
    double A, B, R;

    scanf("%lf", &A);
    scanf("%lf", &B);

    R = (A * 3.5 + B * 7.5) / 11;

    printf("MEDIA = %.5lf\n", R);

    return 0;
}
