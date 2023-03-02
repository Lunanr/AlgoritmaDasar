#include<stdio.h>

int main(){
	
//	printf("Ini tambah : %d\n", 2+3);
//	printf("Ini kurang : %d\n", 2-3);
//	printf("Ini kali : %d\n", 3*3);
//	printf("Ini bagi : %d\n", 5/2);
//	printf("Ini bagi (desimal) : %d\n", 5.0/2.0);
//	printf("Arithmetic : (%d+%d)/%d = %d\n", 5, 2, 3, (5+2)/3);
//	
//	printf("AND : %d\n", 10&3);
//	printf("OR : %d\n", 20|30);
//	printf("XOR : %d\n", 5^2);
//	printf("Shift Right : %d\n", 3>>4);
//	printf("Shift Left : %d\n", 6<<5);

int a,b;
	scanf("%d %d",&a, &b);
	printf("Pertambahan: %d", a+b);
	
	scanf("%d %d",&a, &b);
	printf("Pengurangan: %d", a-b);
	
	scanf("%d %d",&a, &b);
	printf("Perkalian: %d", a*b);
	
	scanf("%d %d",&a, &b);
	printf("Pembagian: %d", a/b);
	
	scanf("%d %d",&a, &b);
	printf("Modulus: %d", a%b);
	
	//Pre Increment
//	int angka = 0;
//	printf("%d\n", ++angka);
//	printf("%d\n", angka);
//	//Post Increment
//	//Pre Decrement
//	//Post Decrement
//	int number = 0;
//	printf("%d\n", angka++);
	
	return 0;
}
