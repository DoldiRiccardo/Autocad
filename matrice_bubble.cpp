#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define lato 3
#define max 99
int temp;
int vert[lato];
int lung[lato];
int matrice[lato][lato];
int main(void){
	printf("Inserire i valori dei primi fattori");
	for(int x = 0; x < lato; x++){
		printf("val %d: ",x);
		scanf(" %d ",&vert[x]);
	}
	printf("Inserire i valori dei secondi fattori");
	for(int x = 0; x < lato; x++){
		printf("val %d: ",x);
		scanf(" %d ",&lung[x]);
	}
	for(int x = 0; x < lato; x++) {
		for(int y = 0; y < lato; y++){
			matrice[x][y]=(vert[x]*lung[y]);
		}
	}
	for(int i=0;i<lato;i++){ //stampo il vettore in colonne ordinate tenendo conto della lunchezza dei numeri
		for(int y=0;y<lato;y++){
			if(matrice[i][y]>=10){
				printf(" %d",matrice[i][y]);	
			}else{
				printf(" %d ", matrice[i][y]);
			}
			
		}
		printf("\n");
	}
	printf("\n");
	for(int x = 0; x < lato; x++){
		printf(" %d ",matrice[x][x]);
	}
}
