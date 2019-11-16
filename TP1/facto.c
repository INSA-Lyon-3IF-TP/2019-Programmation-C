#include <stdio.h>
int main() {
int tab[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
/* utiliser une boucle for pour calculer la factorielle de 10 */

int i = 1;
int fact = 1;
for(; i <= 10; ++i){
fact = fact*i;
}

printf("10! = %d", fact);
return 0;
}
