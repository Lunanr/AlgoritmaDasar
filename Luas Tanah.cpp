#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct rectangle{
	int width;
	int length;
};

struct person{
	char name[200];
	int age;
};

struct info{
	person pemilik;
	rectangle luasTanah;
};

info infoTanah[100];
int luasTanah=0;

info tambahTanah(){
	char name[200];
	int width, length, age;
	
	printf("Input nama pemilik:");
	scanf("%s", name);getchar();
	
	printf("Umur pemilik:");
	scanf("%d",&age);getchar();
	
	printf("Panjang tanah:");
	scanf("%d", &length);getchar();
	
	printf("Luas tanah:");
	scanf("%d", &width);getchar();
	
	info infoBaru = {{"",age}, {length,width}};
	strcpy(infoBaru.pemilik.name, name);
	
	return infoBaru;
};

void total(){
	for(int i = 0 ; i < luasTanah; i++){
		info Tanah = infoTanah[i];
		printf("Pak %s umur %d memiliki tanah dengan luas %d\n",
			Tanah.pemilik.name, Tanah.pemilik.age,
			Tanah.luasTanah.length * Tanah.luasTanah.width); 
	}
}

int main(){
	
	int input;
	
	do{
	system("cls");
	printf("1. Daftar kepemilikan\n");
	printf("2. Lihat kepemilikan\n");
	printf("3. Exit\n");
	scanf("%d", &input);getchar();
	switch(input){
		case 1:
			infoTanah[luasTanah++] = tambahTanah();
		break;
		case 2:
			total();
			getchar();
		break;
		}
	}while(input!=3);
	
return 0;
}
