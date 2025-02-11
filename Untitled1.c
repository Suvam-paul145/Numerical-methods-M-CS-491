#include <stdio.h>
#include <math.h>

float  f(float x) {
	return (x*exp(x) -3);
}

float bisection(float a, float b, float tolerance) {
	float c;
	if((f(a) * f(b)) >0) {
		printf("Bisection methods are not appliable in that interval");
		return 0;
	}

	while((b-a)>= tolerance) {
		c=(a+b)/2;

		if(f(c) ==0) {
			return c;
		} else if(f(a)*f(c) <0) {
			b=c;
		} else {
			a=c;
		}
	}
	return c;
}
int main()
{
	float ans = bisection(1, 2, 0.0001);
	printf("The ans is : %f",ans );
	return 0;
}

