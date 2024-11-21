#include<stdio.h>

int main(){
	float diemToan, diemVan, diemAnh, sum, ave;
	printf("nhap diem Toan: " );
	scanf("%f", &diemToan);
	printf("nhap diem Ngu Van: " );
	scanf("%f", &diemVan);
	printf("nhap diem Tieng Anh: " );
	scanf("%f", &diemAnh);
	sum = diemToan + diemVan + diemAnh; 
	ave = sum / 3; 
	printf("Tong diem 3 mon: %.2f\nDiem trung binh: %.2f", sum, ave); 
	return 0; 
} 
