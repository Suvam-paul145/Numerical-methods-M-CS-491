#include <stdio.h>
#include <math.h>

double f(double x)
{
    // Calculate the square of the natural logarithm of x
    return (log(x)) * (log(x));
}

double trapezoidal(double a, double b, int n)
{
    double sum = 0;
    double h = (b - a) / n;
    for (int i = 1; i < n; i++)
    {
        sum += f(a + i * h);
    }
    double result = sum + (f(a) + f(b)) / 2.0;
    return h * result;
}

int main()
{
    double a = 1.0, b = 1.5;
    int n = 10;

    double result = trapezoidal(a, b, n);
    printf("The integral value is: %.5lf\n", result);

    return 0;
}
