#include <stdio.h>

void arith(){
	int tab[5] = {1, 2, 3, 4, 5};
	int * ptab = tab;
	int i;
	int content;
	for (i = 0; i < 5; i++) {
		content = *(ptab + 1);
		*(ptab + 1) = content + 1;
		printf("%d\r\n", content);
	}
	return;
}

void charAndInt(){

	char c = 10;
	int i = 100;
	char* pc = &c;
	int* pi = &i;

	printf("&c = %p\r\n", pc);
	printf("&i = %p\r\n", pi);
	
	pc += 1;	
	pi += 1;

	printf("&c = %p\r\n", pc);
	printf("&i = %p\r\n", pi);

	printf("c = %d\r\n", *pc);
	printf("i = %d\r\n", *pi);

	return;
}

int main(){
	int var = 42;

	int* pointeur = &var;

	printf("sizeof(pointer) = %ld\r\n", sizeof(pointeur));
	printf("&var = %p\r\n", pointeur);

	*pointeur = 50;	
	
	int tab[5] = {1, 2, 3, 4, 5};
	int * ptab1 = (int *) tab;
	int * ptab3 = &tab[0];
	int * ptab4 = &tab[3];

	printf("tab = %p\r\n", tab);
	printf("ptab1 = %p\r\n", ptab1);
	printf("ptab3 = %p\r\n", ptab3);
	printf("ptab4 = %p\r\n", ptab4);

	arith();	
	charAndInt();

	int i = 0xC0FFEE;
	char* i_as_a_string = (char*) &i;
	printf("First byte : %d\n", *i_as_a_string);
	printf("Second byte : %d\n", *(i_as_a_string + 1));
	printf("Third byte : %d\n", *(i_as_a_string + 2));
	printf("Fourth byte : %d\n", *(i_as_a_string + 3));


	return 0;
}
