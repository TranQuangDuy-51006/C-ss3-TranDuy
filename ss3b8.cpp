#include<stdio.h>

int main(){
	int number, digit, nghichDao;
	printf("nhap so co 4 chu so: ");
	scanf("%d", &number);
	for(int i = 0; i < 4; i++){
		digit = number % 10;
		nghichDao = nghichDao * 10+digit;
		number /= 10; 
	} 
	printf("so nghich dao la: %d", nghichDao); 
	return 0; 
} 
