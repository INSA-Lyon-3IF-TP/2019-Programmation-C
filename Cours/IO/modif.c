#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE* mystream = fopen(argv[1], "r+");

	char c;
	
	while( (c = fgetc(mystream)) != EOF)
	{
		if(c == 'e')
		{
			fseek(mystream, -1, SEEK_CUR);
			fputc('X', mystream);
		}
	}
	fclose(mystream);
	return 0;
}
