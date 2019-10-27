#include <stdio.h>
int main() {
int val = 1000;
/* Completer le code */

if(val == 1000)
printf("Vous êtes dans le mille !\r\n");
else if(val < 1000)
printf("Valeur trop petite\r\n");
else if(val > 1000 && val < 10000)
printf("Valeur trop grande\r\n");
else if(val >= 10000)
printf("Valeur beaucoup trop grande\r\n");

return 0;
}
