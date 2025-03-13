#include <stdio.h>
#include <math.h>

float f(float x)
{
    return exp(x) - x - 1;
}

float derivative(float x)
{
    return exp(x) - 1;
}
float newton_raphson(float x0, float tolerance)
{
    while (derivative(x0) >= tolerance)
    {   float x1;
        x1 = f(x0) - f(x0) / derivative(x0);
        x0 = x1;
    }
    return x1;
}

int main()
{
  
    float ans = newton_raphson(1, 0.0001);
    printf("The ans of the question is: ", ans);
}
