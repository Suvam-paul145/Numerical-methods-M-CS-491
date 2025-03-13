#include <stdio.h
#include <math.h>

float f(float x)
{
    return exp(x) - x - 1;
}

float derivative()
{
    return exp(x) - 1;
}
float newton_raphson(float x0, float tolerance)
{
    float h;
    while (derivative(x0) >= tolerance)
    {
    }
}

int main()
{
    float ans = newton_raphson(1, 0.0001);
}
