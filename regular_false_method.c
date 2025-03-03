#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x * x - 2 * x - 7;
}

float regular_falsi(float a, float b, float tolerance)
{
    if (f(a) * f(b) > 0)
    {
        printf("Regular Falsi method is not applicable in that interval\n");
        return 0;
    }

    float c;
    while ((b - a) >= tolerance)
    {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        if (fabs(f(c)) < tolerance)
        {
            return c;
        }
        else if (f(a) * f(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
    return c;
}

int main()
{
    float ans = regular_falsi(3, 4, 0.00002);
    if (ans != 0)
    {
        printf("The answer is: %f\n", ans);
    }
    return 0;
}