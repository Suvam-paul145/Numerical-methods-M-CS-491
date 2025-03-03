#include<stdio.h>
#include<math.h>

// Function to calculate f(x) = 1 / (1 + x)^2
float f(float x) {
    return 1 / pow((1 + x), 2);
}

int main() {
    int n = 6; // Number of intervals
    float a = 0, b = 6; // Lower and upper limits
    float h, sum = 0;

    h = (b - a) / n; // Step size

    // Applying Simpson's 1/3 Rule
    sum = f(a) + f(b); // First and last terms

    for (int i = 1; i < n; i++) {
        float x = a + i * h;
        if (i % 2 == 0) {
            sum += 2 * f(x); // Even indexed terms
        } else {
            sum += 4 * f(x); // Odd indexed terms
        }
    }

    sum = (h / 3) * sum; // Final result

    printf("The integral value is: %.6f\n", sum);

    return 0;
}
