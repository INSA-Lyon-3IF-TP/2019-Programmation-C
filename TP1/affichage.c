#include <stdio.h>
int main() {
	printf ("0. %c\n", 'a'); //Affiche le caractère 'a'
	printf ("1. %c\n", 65); //Affiche le caractère dont le code ASCII est 65, donc 'A'
	printf ("2. %d\n", 100); //Affiche le décimal 100
	printf ("3. %x\n", 100); //Affiche 100 converti en hexadécimal
	printf ("4. %o\n", 100); //Affiche 100 converti en octal
	printf ("5. %#x\n", 100); //Affiche 100 converti en hexadécimal préfixé par 0x
	printf ("6. %#o\n", 100); //Affiche 100 converti en octal préfixé par 0
	printf ("7. %6.2f \n", 3.1416); //Affiche 3.1416 en ne gardant que 2 chiffres après la virgule (3.14)
	printf ("8. %6.2f \n", 31.416); //Affiche 31.416 en ne gardant que 2 chiffres après la virgule et en arrondissant (31.42)
	printf ("9. %E \n", 3.1416); //Affiche 3.1416 en écriture scientifique
	printf ("10. %*d \n", 5, 10); //Affiche 10 précédé d'un nombre d'espaces permettant d'afficher au minimum 5 caractères sur la ligne
	return 0;
}