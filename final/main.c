#include "analizator.h"


int main (int argc, char** argv) {
	if (argc < 2)
	{
		perror("There is no input file\n");
		return 1;
	}

	yyin = fopen(argv[1], "r");	
	yyparse();
	return 0;
}

