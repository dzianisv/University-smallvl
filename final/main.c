#include "analizator.h"


int main (int argc, char** argv) {
	if (argc < 2)
	{
		perror("There is no input file\n");
		return 1;
	}

	char* filename = strdup(argv[1]);																																					
	yyparse();
	return 0;
}

