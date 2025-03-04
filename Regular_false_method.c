#include <stdio.h>
#include <math.h>

double f(double x) {
    return (x * x - 2 * x - 7);
}

double regulaFalsi(double x0, double x1, double tol, int max_iter) {
    double x2;
    int iter = 0;

    while (iter < max_iter) {
        x2 = x1 - (f(x1) * (x1 - x0)) / (f(x1) - f(x0));

        if (fabs(f(x2)) < tol) {
            return x2;
        }

        if (f(x2) * f(x0) < 0) {
            x1 = x2;
        } else {
            x0 = x2;
        }

        iter++;
    }

    return x2;
}

int main() {
    double x0 = 2.0, x1 = 3.0; 
    double tol = 0.0001;        
    int max_iter = 100;        

    double root = regulaFalsi(x0, x1, tol, max_iter);

    printf("The root of the equation is: %lf\n", root);

    return 0;
}
