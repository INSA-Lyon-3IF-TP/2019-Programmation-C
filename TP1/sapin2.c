#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randInt(int max, int min){
	
	if(max == 0)
	max = 2;
	/* initialiser le generateur de nombres aleatoires */
	srand((unsigned) time(NULL));
	/* retourne 1 entier aleatoire compris 1 et 20 */
	return (rand()%max)+min;
}

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

int a=randInt(20, 4);
int b=randInt(a/3,1);
int c=randInt(a/2,1);
int e=randInt(a-2,1);
int d=randInt(((a-e-2)*2)-2,1);

sapin(a,b,c,d,e);

printf("\r\n");

printf("d=%d -- e=%d", d, e);

//sapin(12,4,6,3,2);

return 0;
}
