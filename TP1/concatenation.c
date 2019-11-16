#include <stdio.h>
#include <string.h>
int main() {
char dest[20]="Hello";
char src[20]="World";
strncat(dest,src,3); //Concatène "Hello" et "Wor" (3 premiers caractères de src) dans dest
printf("%s\n",dest);
strncat(dest,src,20); //Concatène "HelloWor" et "World" (20 premiers caractères de src) dans dest
printf("%s\n",dest);
return 0;
}

