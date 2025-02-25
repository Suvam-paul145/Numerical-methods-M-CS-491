#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x * x - 2 * x - 7;
}

float regular_falsi(float a, float b, float tolerance)
{
    float c = (a * f(b) - b * f(a)) / (f(b) - f(a));
    if (f(a) * f(b) > 0)
    {
        printf("Regular Falsi method is not applicable in that interval");
        return 0;
    }

    else
    {

        while ((b - a) >= tolerance)
        {
            if ((c) == 0)
            {
                return f(c);
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
    }
    return c;
}

int main()
{
    int tolerance;
    printf("Please enter the tolerance value: ");
    scanf("%f", &tolerance);
    float ans = regular_falsi(1, 10, tolerance);
    printf("The ans is : %f", ans);
    return 0;
}