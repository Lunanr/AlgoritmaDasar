#include<stdio.h>

int main(){
	
	//SELECTION
	/*
		1. If, else if, else
		2. Switch case
		3. Ternary if
	*/
	
	int angka = 3;
	
	 Kalau angka 0 maka print "nol", kalau angka ganjil print "ganjil"
	 Kalau angka genap print "genap"
	if(angka == 0){
		printf("nol");
	}
	else if(angka%2 == 1){
		printf("ganjil");
	}
	else{
		printf("genap");
	}

	//switch case

	switch(angka){
		case 0:
			printf("nol");
			break;
		case 1: // angka == 1
			printf("satu");
			break;
		case 5:
			printf("lima");
			break;
		default:
			printf("Selain nol satu dan lima");
		
	}
	
	//	Ternary
	
	int bilangan = 3;
	
	// kondisi ? benar : salah
	printf("%s", (angka%2 == 0? "genap" : "ganjil"));
	
	int a,b,c;
	
	scanf("%d", &a);
	scanf("%d %d", &b,&c);
	
	if(a>=b && a<=c){
		printf("%d diantara %d dan %d", a, b, c);
	}
	else{
		printf("%d bukan diantara %d dan %d", a, b, c);
	}
	
	return 0;
}
