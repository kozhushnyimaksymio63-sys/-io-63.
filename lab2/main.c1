#include <stdio.h>

int main(void) {
    int n;
    printf("Vvedit n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Pomylka vvedennia n.\n");
        return 1;
    }

    unsigned long long ops = 0;

    double sum = 1.0;
    ops++; // sum = 1.0

    double pow3 = 1.0;
    ops++; // pow3 = 1.0

    double sign = 1.0;
    ops++; // sign = 1.0

    int i = 1;
    ops++; // i = 1
    ops++; // i <= n
    while (i <= n) {
        pow3 = pow3 * 3.0;
        ops += 2; // * ta =

        sign = -sign;
        ops += 2; // - ta =

        double denom = (2.0 * i + 1.0) * pow3;
        ops += 4; // 2.0 * i, + 1.0, * pow3, =

        double term = sign / denom;
        ops += 2; // / ta =

        sum = sum + term;
        ops += 2; // + ta =

        i++;
        ops++; // i++
        ops++; // i <= n
    }

    printf("Rezultat: %.7f\n", sum);
    printf("Kilkist operatsii: %llu\n", ops);

    return 0;
}
