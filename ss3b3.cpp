#include<stdio.h>

int main(){
	const float PI = 3.14;
	float r, C, S;
	printf("nhap ban kinh hinh tron: ");
	scanf("%f", &r);
	C = 2 * PI * r;
	S = PI * (r * r); 
	printf("Chu vi hinh tron là : %.2f\nDien tich hinh tron la: %.2f", C, S); 
	return 0; 
} 
