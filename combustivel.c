#include <stdio.h>

int main()
{
    int TG, V;
    float D, L;

    scanf("%d\n%d", &TG, &V);

    D = TG * V;
    L = D / 12;

    printf("%.3f\n", L);
    return 0;
}
