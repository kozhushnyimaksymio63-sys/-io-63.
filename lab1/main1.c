#include <stdio.h>

int main() {
    double x, y;
    printf("x = ");
    if (scanf("%lf", &x) != 1) return 1;

    if (x > -15.0) {
        if (x <= 3.0) {
            y = 4.0 * x * x + 2.0;
            printf("f(x) = %.2f\n", y);
        } else {
            printf("Error: x > 3\n");
        }
    } else {
        printf("Error: x <= -15\n");
    }
    return 0;
}