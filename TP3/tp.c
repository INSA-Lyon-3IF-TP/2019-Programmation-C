#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void q3()
{
	int n;
	scanf("%d",&n);
	int * tab = malloc(n * sizeof(int));
	int i = 0;
	int min;
	int max;
	int somme = 0;
	for(; i < n; ++i)
	{
		scanf("%d", &tab[i]);
		somme += tab[i];
		if(i == 0)
		{
			min = tab[i];
			max = tab[i];
		}
		else if(tab[i] < min)
			min = tab[i];
		else if(tab[i] > max)
			max = tab[i];
	}
	free(tab);
	printf("N = %d -- Min = %d -- Max = %d -- Moy = %d\r\n", n, min, max, somme/10);
}

void q4()
{
	int n = 10;
	int * tab = malloc(n * sizeof(int));
	int number;
	int i = 0;
	int min;
	int max;
	int somme = 0;
	for(; ; ++i)
	{
		
		int nbtokens = scanf("%d", &number);

		if(nbtokens != 1 || feof(stdin)){
			free(tab);
			break;
		}

		if(i == n){
			tab = realloc(tab, 2 * n * sizeof(int));
			n = 2*n;
		}		

		tab[i] = number;
		somme += tab[i];
		if(i == 0)
		{
			min = tab[i];
			max = tab[i];
		}
		else if(tab[i] < min)
			min = tab[i];
		else if(tab[i] > max)
			max = tab[i];
	}
	
	if(i < n )
		n = i;

	printf("N = %d -- Min = %d -- Max = %d -- Moy = %d\r\n", n, min, max, somme/n);
}

typedef struct
{
	float a;
	float b;
} Complexe;

void affiche(Complexe z)
{
	if(z.b < 0)
		printf("z = %f%f.i\r\n", z.a, z.b);
	else
		printf("z = %f+%f.i\r\n", z.a, z.b);
}

Complexe ajoute(Complexe z1, Complexe z2)
{
	Complexe z;
	z.a = z1.a + z2.a;	
	z.b = z1.b + z2.b;
	return z;	
}

Complexe multiplie(Complexe z1, Complexe z2)
{
	Complexe z;
	z.a = (z1.a * z2.a) - (z1.b * z2.b);	
	z.b = (z1.a * z2.b) + (z1.b * z2.a);	
	return z;	
}

void q6()
{
	Complexe z1, z2;
	scanf("%f",&z1.a);
	scanf("%f",&z1.b);
	scanf("%f",&z2.a);
	scanf("%f",&z2.b);
	affiche(ajoute(z1,z2));
	affiche(multiplie(z1,z2));
}

typedef struct
{
	char tel[10];
	char * nom;
}Personne;

void q8()
{
	Personne repertoire[10];

	int i = 0;
	for(; i < 10; ++i)
	{
		char buffer[50];
		scanf("%s", buffer);
		repertoire[i].nom = malloc((strlen(buffer)+1) * sizeof(Personne));
		strcpy(repertoire[i].nom,buffer);

		scanf("%s", repertoire[i].tel);

		printf("%s: %s\r\n", repertoire[i].nom, repertoire[i].tel);
	}

	i = 0;
	for(; i < 10; ++i)
		free(repertoire[i].nom);
}

int main()
{
	q8();
	return 0;
}
