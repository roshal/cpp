
#include <stdio.h>
#include <math.h>

double GetSinCos(double SinArgument);
double GlobalVar;

int main() {
	GlobalVar = 3.14;
	printf("sin(1.27) * cos(3.14) = %f", GetSinCos(1.27));
	return 0;
}

double GetSinCos(double SinArgument) {
	return sin(SinArgument) * cos(GlobalVar);
}
