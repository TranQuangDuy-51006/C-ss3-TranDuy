#include<stdio.h>

int main(){
	int number, digit;
	printf("nhap so co 4 chu so: ");
	scanf("%d", &number);
	int sum = 0;
	for(int i = 0; i < 4; i++){
		digit = number % 10;
		sum += digit;
		number /= 10; 
	} 
	printf("tong cac chu so la: %d", sum); 
	return 0; 
} 
