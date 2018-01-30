#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 100
#define lung 10
int i,temp;
int vett[lung];
int main(void){
	srand((unsigned)time(NULL));
	for(i = 0; i<lung-1; i++){
		vett[i]= (rand()% max+1);
	}
	for(i = 0; i<lung-1;i++){
		printf(" %d ", vett[i]);
	}
	printf("\n");
	printf("Inserire il numero da ricrcare: ");
	scanf("%d",&temp);
	for(i=0; i<lung-1;i++){
		if(vett[i]== temp){
			break;
		}
	}
	if(i!=lung-1){
		printf("Il numero si trova in posizione %d",i);
	}else{
		printf("Il numero non si trova nell'array");
	}
	
}
