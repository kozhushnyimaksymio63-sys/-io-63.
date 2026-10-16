#include <stdio.h>

int main() {
    double x, y;
    printf("x = ");
    if (scanf("%lf", &x) != 1) return 1;

    if (x <= -30.0 || x > 20.0) {
        y = 3.0 * x * x * x / 4.0 - 5.0;
        printf("f(x) = %.2f\n", y);
    } else {
        printf("Error: x out of domain\n");
    }
    return 0;
}