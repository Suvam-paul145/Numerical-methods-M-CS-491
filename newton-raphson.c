#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (pow (10,x) + x - 4);
}

float derivative(float x)
{
    return pow(10, x) * log(10) + 1;
}
float newton_raphson(float x0, float tolerance)
{
    float x1;
    while (derivative(x0) >= tolerance)
    {
        x1 = f(x0) - f(x0) / derivative(x0);
        x0 = x1;
    }
    return x1;
}

int main()
{

    float ans = newton_raphson(2, 0.0001);
    printf("The ans of the question is: %f", ans);
}
