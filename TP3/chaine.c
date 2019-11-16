#include <stdio.h>
#include <stdlib.h>

typedef struct _elem
{
	int value;
	struct _elem* next;
} elem;

elem* list = NULL;

void afficher(){
	printf("--- Début affichage ---\r\n");
	elem* current = list;
	while(current != (elem*) NULL)
	{
		printf("%d\r\n", current->value);
		current = current->next;
	}
	printf("--- Fin affichage ---\r\n");
}

void ajouter_en_tete()
{
	elem* new = (elem*) malloc(sizeof(elem));
	new->next = list;
	scanf("%d", &(new->value));
	list = new;
}

void ajouter_en_queue()
{
	if(list == NULL)
	{
		elem* new = (elem*) malloc(sizeof(elem));
		new->next = list;
		scanf("%d", &(new->value));
		list = new;
		return;
	}
	elem* current = list;
	while(current->next != (elem*) NULL)
	{
		current = current->next;
	}
	elem* new = (elem*) malloc(sizeof(elem));
	current->next = new;
	new->next = NULL;
	scanf("%d", &(new->value));
}

void rechercher(){
	int number;
	scanf("%d", &number);
	printf("--- Début recherche ---\r\n");
	elem* current = list;
	int i = 1;
	while(current != (elem*) NULL)
	{
		if(current->value == number)
		{
			printf("Trouvé : %d\r\n", i);
			printf("--- Fin recherche ---\r\n");
			return;
		}
		current = current->next;
		++i;
	}
	printf("Pas Trouvé\r\n");
	printf("--- Fin recherche ---\r\n");
}

void supprimer(){
	int number;
	scanf("%d", &number);
	elem* current = list;
	elem* previous = NULL;
	while(current != (elem*) NULL)
	{
		if(current->value == number)
		{
			if(previous == NULL)
			{
				
				list = current->next;
				free(current);
				current = list;
			}
			else
			{
				//printf("Previous not null\r\n");
				previous->next = current->next;
				free(current);
				current = previous->next;
			}		
		}
		else
		{
			previous = current;
			current = current->next;
		}
	}
}

void dupliquer()
{
	int number;
	scanf("%d", &number);
	elem* current = list;
	while(current != (elem*) NULL)
	{
		if(current->value == number)
		{
			elem* new = (elem*) malloc(sizeof(elem));
			new->value = number;
			new->next = current->next;
			current->next = new;
			current = new->next;
		}
		else
		{
			current = current->next;
		}
	}
}

void est_triee()
{
	if(list == NULL)
	{
		printf("list is null");
		printf("OUI\r\n");
		return;
	}
	elem* current = list;
	while(current->next != (elem*) NULL)
	{
		if(current->value < current->next->value)
		{
			printf("NON\r\n");
			return;
		}
		current = current->next;
	}
	printf("OUI\r\n");
}

int main(void)
{
	while(1)
	{
		printf("menu:\n");
		printf("\t1: ajouter en tete\n");
		printf("\t2: ajouter en queue\n");
		printf("\t3: afficher la liste\n");
		printf("\t4: rechercher dans la liste\n");
		printf("\t5: supprimer de la liste\n");
		printf("\t6: dupliquer un element de la liste\n");
		printf("\t7: afficher si la liste est triée\n");
		printf("\t0: quitter\n");
		int choix;
		scanf("%d", &choix);
		switch(choix)
		{
			case 0:
				goto fin;
			case 1:
				ajouter_en_tete();
				break;
			case 2:
				ajouter_en_queue();
				break;
			case 3:
				afficher();
				break;
			case 4:
				rechercher();
				break;
			case 5:
				supprimer();
				break;
			case 6:
				dupliquer();
				break;
			case 7:
				est_triee();
				break;
			default:
				printf("choix incorrect\n");
				continue ; // revenir au menu
		}
	}
	fin:
	printf("--- Début nettoyage ---\r\n");
	elem* current = list;
	elem* previous;
	while(current != (elem*) NULL)
	{
		printf("%d\r\n", current->value);
		previous = current;
		current = current->next;
		free(previous);
	}
	printf("--- Fin nettoyage ---\r\n");
	printf("au revoir\n");
	return 0;
}
