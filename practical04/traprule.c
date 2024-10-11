#include <stdio.h>
#include <math.h>

float pi;
float degtorad(float arg);
float trapsum(float trap_vals[13]);
float tan_vals[13];

int main(void){
	float degang, radang;
	float sum;
	pi = atan(1.0)*4.0;
	for (int i=0; i<13; i++){
		degang = i*5.0;
		radang = degtorad(degang);
		tan_vals[i] = tan(radang);
		printf("Array[%d] = Tan(%f) = %f \n", i, radang, tan_vals[i]);
	}
	sum = trapsum(tan_vals);
	printf("Integral of tan(x) from 0 to 60 degrees = %f \n", sum);

	return 0; 
}

float degtorad(float arg) {
	return ((pi*arg)/180);
}

float trapsum(float tan_vals[13]) {
	float sum;
	sum = tan_vals[12];
	for (int i=1; i<12; i++) {
		sum = sum + (2*tan_vals[i]);
	}
	sum = ( 1.0472 / (2*12) ) * sum;
	
	return sum;
}
