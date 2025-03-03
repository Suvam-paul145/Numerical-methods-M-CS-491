#include<stdio.h>
#include<math.h>

float f(float x) {
    return 1 / pow((1 + x), 2);
}

int main() {
    int n = 6; 
    float a = 0, b = 6; 
    float h, sum = 0;

    h = (b - a) / n; 

    sum = f(a) + f(b); 

    for (int i = 1; i < n; i++) {
        float x = a + i * h;
        if (i % 2 == 0) {
            sum += 2 * f(x); 
        } else {
            sum += 4 * f(x); 
        }
    }

    sum = (h / 3) * sum; 

    printf("The integral value is: %.6f\n", sum);

    return 0;
}
