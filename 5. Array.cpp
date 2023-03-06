#include<stdio.h>
#include<string.h>

int main(){
	
	int listAngka[20];
	char str[20];
	
	scanf("%[^\n]", str);
	getchar();
	
	int panjang = strlen(str);
	
	for(int i = 0; i < panjang; i++){
		if(str[i] >= 97 && str[i] <= 122){
			str[i] -= 32;
		}
	}
	printf("%s\n", str);
	printf("%s\n", strupr(str));
	printf("%s\n", strlwr(str));
	
//	listAngka[0] = 1;
//	printf("%d\n", listAngka[0]);
//	listAngka[0] = 2;
//	printf("%d\n", listAngka[0]);
	
	
	return 0;
}
