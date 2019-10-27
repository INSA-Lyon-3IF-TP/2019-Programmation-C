#include <stdio.h>
int main() {
int average;

//Le programme ne compile pas car le tableau n'est pas déclaré
//Début correction
int grades[3];
grades[1]=75;
//Fin correction

grades[0] = 85;
grades[2] = 95;
average = (grades[0] + grades[1] + grades[2]) / 3;
printf("The average of the 3 grades is: %d\r\n", average);
return 0;
}

