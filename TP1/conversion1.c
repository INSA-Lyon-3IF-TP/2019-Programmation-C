#include <stdio.h>
#include <stdlib.h>
int main(){
int i = 4;
float f = (float) i;
char c = 100;
int dc = (int) c;
printf("i = %d \n", i); //Affiche la valeur entière de i, soit 4
printf("f = %f \n", f); //Affiche la valeur flottante de i, soit 4.000
printf("c = %c \n", c); //Affiche le caractère dont le code ASCII vaut c, soit 'd' (100)
printf("dc = %d \n", dc); //Affiche la valeur décimale du caractère d, soit 100
return 0;
}
