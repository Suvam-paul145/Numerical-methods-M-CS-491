#include <stdio.h>
#include <math.h>

float f(float x)
{
    return cos(x) - x * x - x;
}

float regular_falsi(float a, float b, float tolerance)
{

    if (f(a) * f(b) > 0)
    {
        printf("Regular Falsi method is not applicable in that interval \n");
        return 0;
    }

    float c;
    while (f(c) < tolerance)
    {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        if (f(c) == 0)
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
    printf("The ans is : %f", ans);
    return 0;
}