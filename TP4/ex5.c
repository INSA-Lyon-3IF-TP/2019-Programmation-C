#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* chooseRandomLine(char* filename)
{
	FILE* file = fopen(filename, "r");
	srandom(time(NULL));
	long nbLigne = random() % 8;
	int i = 0;
	char* ligne = malloc(sizeof(char)*150);
	fgets(ligne, 150,file);
	for(; i < nbLigne; ++i)
	{
		fgets(ligne, 150,file);
	}
	fclose(file);
	return ligne;
}

int main()
{
	printf("%s", chooseRandomLine("colonne1.txt"));
	printf("%s", chooseRandomLine("colonne2.txt"));
	printf("%s", chooseRandomLine("colonne3.txt"));
	printf("%s", chooseRandomLine("colonne4.txt"));
	return 0;
}
