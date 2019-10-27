#include <stdio.h>

void sapin(int hauteur_cone, int hauteur_tronc, int largeur_tronc, int x_boule, int y_boule){
	int i = 1;
	int cpt = 1;
	for(; i <= hauteur_cone; ++i){

		int j = 0;
		for(; j <= hauteur_cone-1-i ; ++j)
			printf(" ");

		int k = 1;
		
		for(; k <= cpt; ++k){
			if(k == x_boule && i == (hauteur_cone + 1) - y_boule){
				printf("o");
				continue;
			}
			printf("*");
		}
		cpt+=2;



		printf("\r\n");
	}
	
	
	int largeur_sapin = (hauteur_cone * 2) - 1;
	int cptHauteur = 1;
	for(; cptHauteur <= hauteur_tronc ; ++cptHauteur){	
		int l = 1;
		for(; l <= (largeur_sapin - largeur_tronc)/2 ; ++l)
			printf(" ");
		
		int m = 1;
		for(; m <= largeur_tronc ; ++m)
			printf("|");
		
		printf("\r\n");
	}
	
}

int main(){
sapin(6,2,3,3,2);

printf("\r\n");

sapin(12,4,6,3,2);

return 0;
}
