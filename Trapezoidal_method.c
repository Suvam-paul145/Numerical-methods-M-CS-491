#include <stdio.h>
#include <math.h>

double f(double x) {
    return pow(log(x), 2);
}

double trapezoidal(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = (f(a) + f(b)) / 2.0;

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += f(x);
    }

    return h * sum;
}

int main() {
    double a = 1.0, b = 1.5;
    int n = 10;

    double result = trapezoidal(a, b, n);
    printf("The integral value is: %.5lf\n", result);

    return 0;
}
