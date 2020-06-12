#include <stdio.h>
#include <math.h>
 
int main(void) {

    float A, B, C, delta, x1, x2;
	
	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	
	delta = (pow(B, 2)) - ((4*A)*C);
	
	printf("%f\n%f\n%f\n%f\n", A, B, ((4*A)*C), sqrt(delta));
	
	x1 = ((-B) + sqrt(delta))/20.0000000;
	x2 = ((-B) - sqrt(delta))/2*A;
	
	printf("%f\n%f", x1, 2*A);
	
    return 0;
}