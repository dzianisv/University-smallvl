#include "analizator.h"


int main (int argc, char** argv) {
	
	if (argc < 2)
	{
		perror("There is no input file\n");
		return 1;
	}

	printf("Try to parse file %s\n", argv[1]);

	yyin = fopen(argv[1], "r");	
	if( yyin == NULL )
	{
		perror("Can't open source file");
		return 2;
	}

	do
	{
		yyparse();
	} while( !feof(yyin));
	
	return 0;
}

