#include<stdio.h>
#include<math.h>
#define n 3.14159;

int main()
{
    double raio, area;

    scanf("%lf", &raio);

    area = pow(raio, 2) * n;

    printf("A=%.4lf\0", area);

    return 0;
}
