#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE* mystream = fopen(argv[1], "r");

	char c;
	
	while( (c = fgetc(mystream)) != EOF)
	{
		printf("%c",c);
	}

	return 0;
}
