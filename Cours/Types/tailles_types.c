#include <stdio.h>
#include <math.h>

int main(){

//Tailles des types entiers
printf("sizeof(char) = %ld\n", sizeof(char)); //1
printf("sizeof(unsigned char) = %ld\n", sizeof(unsigned char)); //1
printf("sizeof(int) = %ld\n", sizeof(int)); //4
printf("sizeof(unsigned long) = %ld\n", sizeof(unsigned int)); //4
printf("sizeof(long) = %ld\n", sizeof(long)); //8
printf("sizeof(unsigned long) = %ld\n", sizeof(unsigned long)); //8
printf("sizeof(long long) = %ld\n", sizeof(long long)); //8
printf("sizeof(unsigned long long) = %ld\n\n", sizeof(unsigned long long)); //8

//Dépassement de capacité
unsigned long maxInt = pow(2,32) - 1;
unsigned long maxUInt = pow(2,32)/2 - 1;
printf("Taille max d'un int = %ld\n", maxInt);
printf("Taille max d'un unsigned int = %ld\n", maxUInt);
char myChar = 127; //Valeur max
printf("myChar = %d\n", myChar);
++myChar; //Prends pour valeur -128
printf("myChar + 1 = %d\n\n", myChar);

//Tailles des types décimaux
printf("sizeof(float) = %ld\n", sizeof(float)); //4
printf("sizeof(double) = %ld\n\n", sizeof(double)); //8

//Vérification que le char est signé
unsigned char unsignedCharMinusFive = -5;
char charMinusFive = -5;
printf("unsignedCharMinusFive = %d\n", unsignedCharMinusFive);
printf("charMinusFive = %d\n\n", charMinusFive);

//Mettra à 1 le bit 3 (en partant de la droite) d'un entier quelconque
int myInteger = 8; //(0b1000)
myInteger = myInteger | 0b0100;
printf("8 | 0b0100 = %d\n", myInteger);
//Mettra à 0 le bit 3 (en partant de la droite) d'un entier quelconque
//myInteger vaut 12
myInteger = myInteger & 0b1011;
printf("12 & 0b1011 = %d\n\n", myInteger);

//Retour sur le type char
char mychar = 'A';
printf("mychar = %d\n", mychar);
mychar = 66;
printf("mychar = %c\n", mychar);

return 0;
}
