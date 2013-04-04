#ifndef ANALIZATOR_H
#define ANALIZATOR_H

#include <stdio.h>
#include "bison.tab.h"

extern char *yytext;
extern int yy_flex_debug;
extern int yyparse(void);
extern int yylex (void);
extern FILE *yyin, *yyout;
#endif
