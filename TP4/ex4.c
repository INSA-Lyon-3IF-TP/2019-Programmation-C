#include <stdio.h>

int nbLines(FILE* stream)
{
	char c;
	int res = 0;
	while((c = fgetc(stream)) != EOF)
	{
		if(c == '\n')
		{
			++res;
		}
	}
	rewind(stream);
	return res;
}

int main(int argc, char* argv[])
{
	if(argc != 2)
		return 1;
	FILE* monfic = fopen(argv[1], "r");
	printf("%s contient %d ligne(s)\r\n", argv[1], nbLines(monfic));
	return 0;
}
