#include<stdio.h>
#include<math.h>
#define n 3.14159

int main()
{
    double r, V;

    scanf("%lf", &r);

    V = ((4/3.0) * n)* pow(r,3);

    printf("VOLUME = %.3lf\n", V);

    return 0;
}
