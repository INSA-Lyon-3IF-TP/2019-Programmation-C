#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE* inputStream = fopen(argv[1], "r");
	FILE* outputStream = fopen(argv[2], "w+");

	char c;
	
	while( (c = fgetc(inputStream)) != EOF)
	{
		fputc(c, stdout);
		fputc(c, outputStream);
	}

	return 0;
}
