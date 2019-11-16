#include <stdio.h>

void q1(){
	double d = 13.12;
	printf("d = %lf, &d = %p", d, &d);
	return;
}

void q2(){
	double d = 13.12;
	double * ptr_d = &d;
	printf("d = %lf, &d = %p\r\n", d, &d);
	printf("ptr_d = %p, &ptr_d = %p\r\n", ptr_d, &ptr_d);
	return;
}

void q3(){
	double d = 13.12;
	double * ptr_d = &d;
	*ptr_d = 14.15;
	printf("d = %lf, &d = %p\r\n", d, &d);
	printf("ptr_d = %p, &ptr_d = %p\r\n", ptr_d, &ptr_d);
	return;
}

void q4(){
	double d = 13.12;
	double * ptr_d;
	printf("d = %lf, &d = %p\r\n", d, &d);
	printf("ptr_d = %p, *$ptr_d=%lf ,&ptr_d = %p\r\n", ptr_d, *ptr_d, &ptr_d); //Contenu de ptr_d incertain
	return;
}

void q5(){
	float f = 3.14;
	float * ptr_f = &f;
	printf("sizeof(f)=%ld\r\n", sizeof(f));
	printf("sizeof(ptr_f)=%ld\r\n", sizeof(ptr_f));
	return;
}

void q6(){
	float f = 3.14;
	float * ptr_f = &f;
	void * ptr;
	printf("sizeof(f)=%ld\r\n", sizeof(f));
	printf("sizeof(ptr_f)=%ld\r\n", sizeof(ptr_f));
	printf("sizeof(ptr)=%ld\r\n", sizeof(ptr));
	return;
}

void q7(){
	int tab[10] = {0};
	//printf("tab=%p\r\n", tab);
	printf("&tab=%p\r\n", &tab);
	int i = 0;
	for(; i < 10 ; ++i){
		printf("&tab[%d]=%p\r\n",i, &tab[i]);
		printf("tab[%d]=%d\r\n",i, tab[i]);
	}
	return;
}

void q9(){
	int tab[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("Parcours via fori\r\n");
	int i = 0;
	for(; i < 10 ; ++i){
		printf("tab[%d]=%d\r\n",i, tab[i]);
	}
	return;
}

void q10(){
	int tab[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("Parcours normal via ptr\r\n");
	int * ptr_tab = tab;
	int * max = ptr_tab + 10;
	for(; ptr_tab != max ; ++ptr_tab){
		printf("%d\r\n",*ptr_tab);	
	}
	printf("Parcours inversé impaire via ptr\r\n");
	int * ptr_tab2 = &tab[8];
	int * max2 = ptr_tab2 - 9;
	for(; ptr_tab2 != max2 ; ptr_tab2-=2){
		printf("%d\r\n",*ptr_tab2);	
	}
	return;
}

void q11(){
	double tab[3] = {1.1,2.2,3.3};
	printf("Parcours via double*\r\n");
	double * ptr_tab = tab;
	double * max = ptr_tab + 3;
	for(; ptr_tab != max ; ++ptr_tab){
		printf("%f\r\n",*ptr_tab);	
	}
	printf("Parcours via void*\r\n");
	void * ptr_tab2 = tab;
	void * max2 = tab + 3;
	for(; ptr_tab2 != max2 ; ++ptr_tab2){
		printf("%f\r\n",*((double*)ptr_tab2));	
	}
	
	return;
}

void q12(){
	int tab[3] = {1,2,3};
	printf("Parcours via int* jusqu'à n+1\r\n");
	int * ptr_tab = tab;
	int * max = ptr_tab + 4;
	for(; ptr_tab != max ; ++ptr_tab){
		printf("%d\r\n",*ptr_tab);	
	}
}

void q13(){
	int tab[10] = {1,2,3,4,5,6,7,8,9,10};
	int tab2[10] = {101,102,103,104,105,106,107,108,109,110};
	printf("tab2[4]=%d\r\n", tab2[4]);
	printf("Parcours de tab via ptr jusqu'à n+10\r\n");
	int * ptr_tab = tab;
	int * max = ptr_tab + 20;
	for(; ptr_tab != max ; ++ptr_tab){
		printf("%d\r\n",*ptr_tab);	
	}	
	return;
}

void q14(){
	double matrice[10][2];
	int i;
	int j;
	for(i=0; i < 10; ++i)
		for(j=0; j < 2; ++j)
			printf("&matrice[%d][%d] = %p\r\n", i, j, &matrice[i][j]);
	return;
}

void q15(){
	double vecteur[20];
	int i = 0;
	for(;i < 20; ++i)
		printf("&vecteur[%d] = %p\r\n", i, &vecteur[i]);
		
	return;
}

//q17
int A = 10;
int B = 20;

void swap(int a, int b){
	printf("&a = %p, &b = %p\r\n", &a, &b);
	printf("&A = %p, &B = %p\r\n", &A, &B);
	int tmp = a;
	a = b;
	b = tmp;
	printf("&a = %p, &b = %p\r\n", &a, &b);
	printf("&A = %p, &B = %p\r\n", &A, &B);
	return;
}

void q16(){
	//int a = 10;
	//int b = 20;
	printf("a = %d, b = %d\r\n", A, B);
	swap(A,B);
	printf("a = %d, b = %d\r\n", A, B);
	return;
}

void swapPtr(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
	return;
}

void q18(){
	int a = 10;
	int b = 20;
	printf("a = %d, b = %d\r\n", a, b);
	swapPtr(&a,&b);
	printf("a = %d, b = %d\r\n", a, b);
	return;
}

int main(){

	q18();

	return 0;
} 
