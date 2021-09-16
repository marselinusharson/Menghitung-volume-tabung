#include <stdio.h>

void main(){
	float t, d;
	float phi = 3.14;
	float volume;
	printf("Masukkan tinggi tabung: ");
	scanf("%f", &t);
	printf("Masukkan diameter tabung: ");
	scanf("%f", &d);
	volume = (phi*t*d);
	printf("Volume tabung tersebut = %f", volume);
	
}
