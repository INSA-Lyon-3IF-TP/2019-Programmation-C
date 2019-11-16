#include <stdio.h>
#include <ctype.h>

void q5()
{
	FILE * stream = fopen("flot.txt", "w");
	int i = 0;
	int j;
	for(; i < 20; ++i)
	{
		j = 0;
		for(; j < 40; ++j)
		{
			fputc('_', stream);
		}
		fputc('\n', stream);
	}
	fseek(stream, 0, SEEK_SET);
	fclose(stream);
	return;
}

void q6()
{
	FILE * stream = fopen("flot.txt", "r+w");
	int i = 0;
	int j;
	for(; i < 20; ++i)
	{
		j = 0;
		for(; j < 40; ++j)
		{
			fputc('_', stream);
		}
		fputc('\n', stream);
	}
	fseek(stream, 0, SEEK_SET);
  
	char k;
	char c;
	int offset;
	scanf("%c", &k);
	while(fgetc(stdin) != '\n');
	while(k != 'q')
	{
		if(isspace(k))
		{
			while(fgetc(stdin) != '\n');
			scanf("%c", &k);
			while(fgetc(stdin) != '\n');
			continue;	
		}
		scanf("%d", &offset);
		if(offset % 40 == 0)
		{
			while(fgetc(stdin) != '\n');
			scanf("%c", &k);
			while(fgetc(stdin) != '\n');
			continue;
		}
		while(fgetc(stdin) != '\n');
		fseek(stream, offset, SEEK_SET);
		fputc(k, stream);
		rewind(stream);
		while((c = fgetc(stream)) != EOF)
		{
			printf("%c",c);
		}
		scanf("%c", &k);
		while(fgetc(stdin) != '\n');
	}
	fclose(stream);
	return;
}

int main (int argc, char* argv[])
{
	q6();	
	return 0;
}
