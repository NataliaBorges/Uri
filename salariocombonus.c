# include <stdio.h>

int main()
{
    char NOME[20];
    double st, tv, r;

    scanf("%s", &NOME);
    scanf("%lf", &st);
    scanf("%lf", &tv);

    r = st + (tv * 0.15);

    printf("TOTAL = R$ %.2lf\n", r);

    return 0;
}
