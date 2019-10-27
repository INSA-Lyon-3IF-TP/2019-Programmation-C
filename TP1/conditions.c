#include <stdio.h>
int main() {
//int val = 1; // Affiche "Hello 2!\n" car pas de break dans le case 1 --> case1==case2
int val=3; //Affiche "Hello 3!\n" et "Other Hello!\n" car pas de break dans le case3
switch(val) {
case 1:
case 2:
printf("Hello 2!\n");
break;
case 3:
printf("Hello 3!\n");
default:
printf("Other Hello!\n");
}
return 0;
}

