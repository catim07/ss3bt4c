#include<stdio.h>
int main(){
	float math,literature,english,total,gpa;
	printf("moi ban nhap diem toan: ");
	scanf("%f",&math);
	printf("moi ban nhap diem van: ");
	scanf("%f",&literature);
	printf("moi ban nhap diem anh van: ");
	scanf("%f",&english);
	total = math + literature + english;
	gpa = total / 3;
	printf("tong diem 3 mon cua ban la: %.2f",total);
	printf("diem trung binh 3 mon cua ban la: %.2f",gpa );
	return 0;
}
