#include<stdio.h>

int main(){
	float C, F;
	printf("nhap do C:" );
	scanf("%f", &C);
	F = C * 1.8 + 32; 
	printf("%.1f do C = %.1f do F ", C, F); 
	return 0; 
} 
