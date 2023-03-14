#include<stdio.h>

int main(){
	
	//Filebase
	
	
	//read, write, apped
	// r -> read
	// w -> write
	// a -> apped
	// r+ -> read, write
	// w+ -> read, write
	// a+ -> append, read
	
	//open, process,close 
	
	char txt[200];
	FILE *fp;
	
	fp = fopen("data.txt", "a+");
	
	fprintf(fp, "123");
	rewind(fp);
	fscanf(fp, "%[^\n]", txt);
	printf("%s", txt);
	
	fclose(fp); //digunakan untuk menutup sebuah file
	
	return 0;
}
