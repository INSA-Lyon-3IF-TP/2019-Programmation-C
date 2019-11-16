#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void writeRandomLineToFile(char* filename, FILE* output)
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
	fputs(ligne,output);
	printf("%s",ligne);
}

int main()
{
	FILE* output = fopen("discours.txt", "w");
	writeRandomLineToFile("colonne1.txt", output);
	writeRandomLineToFile("colonne2.txt", output);
	writeRandomLineToFile("colonne3.txt", output);
	writeRandomLineToFile("colonne4.txt", output);
	fclose(output);
	return 0;
}
