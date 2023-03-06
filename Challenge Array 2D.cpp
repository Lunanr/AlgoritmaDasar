#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main(){
	
	char main[6][6] = {"*****",
					   "*****",
					   "*****",
					   "*****",
					   "*****"};
		
	int playerX = 0, playerY = 0;
	char player = 'p';
	char input;
					   
	while(true){
		for(int i = 0; i < 5; i++){
			for(int j = 0; j < 5; j++){
				if(playerX == j && playerY == i){
					printf("%c",player);
				}
				else
					printf("*");
			}
			printf("\n");
		}
		input = getch(); //menunggu user input
	//w -> cursor bergerak keatas
	//a -> cursor bergerak kekiri
	//s -> cursor bergerak kebawah
	//d -> cursor bergerak kekanan
	
		switch(input){
			case 'w':
				if(playerY>0)playerY -= 1;
			break;
			case 'a':
				if(playerX>0)playerX -= 1;
			break;
			case 's':
				if(playerY<4)playerY += 1;
			break;
			case 'd':
				if(playerX<4)playerX += 1;
			break;
		}
		system("cls");
	}
	
	
	
	return 0;
}
