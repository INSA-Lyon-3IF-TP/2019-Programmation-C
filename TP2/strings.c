#include <stdio.h>
#include <string.h>
#include <math.h>

int TP_strcmp(const char *s1, const char* s2){
	int i = 0;
	printf("s1[i] = %c, s2[i] = %c\r\n", s1[i], s2[i]);
	while(s1[i] != '\0' && s2[i] != '\0'){
		if(s1[i] == s2[i]){
			printf("aa\r\n");
			++i;
			continue;
		}
		if(s1[i] < s2[i])
			return -1;
		if(s1[i] > s2[i])
			return 1;
	}

	printf("s1[i] = %c, s2[i] = %c\r\n", s1[i], s2[i]);

	if(s1[i] == '\0' && s2[i] == '\0')
		return 0;
	if(s1[i] != '\0')
		return 1;
	if(s2[i] != '\0')
		return -1;

	return 0;
}

int charToInt(char c){
	return c - 48;
}

char intToChar(int i){
	return i + 48;
}

int atoi(const char *str){
	int i = 0;
	int n = strlen(str) - 1;
	int res = 0;
	for(; i < strlen(str) ; ++i){
		res += (int)(pow(10.0,(double)n))*charToInt(str[i]);
		printf("res = %d\r\n", res);
		--n;
	} 
	return res;
}

void itoa(int i){
	int mod = i%10;
	int j = 1;
	char chiffres[10];
	while (mod != 0){
		chiffres[j] = intToChar(mod);
		++j;
		i = i/10;
		mod = i%10;
	}
	chiffres[0] = '\0';
	int k = j;
	printf("j=%d\r\n",j);
	for(;k > 0; ++k)
		printf("%c", chiffres[k]);		
}

int main(){
	char my_string[8] = "bonjour\0";
	char my_string_2[8] = "aonjour\0";
	printf("TP_strcmp(my_string, my_string_2) = %d\r\n", TP_strcmp(my_string, my_string_2));
	
	char nums[5] = "4502\0";
	printf("%d\r\n", atoi(nums));

	itoa(12345);
	return 0;
}
