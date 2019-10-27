#include <stdio.h>
#include <stdlib.h>
int main(){
printf("4 / 5 = %f \n", (float)(4/5)); // 4 et 5 sont des entiers, donc '/' signifie division entière et affiche 0
printf("(float)4 / (float)5 = %f\n", (float)4 / (float)5); // 4 et 5 sont des flottants donc division réelle et affiche 0.8
return 0;
}
