#ifndef ANALIZATOR_H
#define ANALIZATOR_H

#include "bison.tab.h"

extern char *yytext;
extern int yyparse();
extern int yylex();
#endif
