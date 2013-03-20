%{
#include <stdio.h>
#include <string.h>

char * filename;
%}

%option yylineno
%option stack	
%x SINGLE_LINE_COMMENT
%x MULTI_LINE_COMMENT

letter [a-zA-Z]
digit [0-9]

%%

def {
	printf("DEF\n");
}

while {
	printf("WHILE\n");
}

do {
	printf("DO\n");
}

var {
	printf("VAR\n");
}

if {
	printf("IF\n");
}

else {
	printf("ELSE\n");
}

({letter})* {
	printf("IDENTIFIER\n");
} 

{digit}+ {
	printf("NUMBER\n");
}

"//"			yy_push_state(SINGLE_LINE_COMMENT);
<SINGLE_LINE_COMMENT>{
[^\n]*	
"\n"	yy_pop_state();
}

"/*" 				yy_push_state(MULTI_LINE_COMMENT);
<MULTI_LINE_COMMENT>{
[^*]*
"*"+[^/]
"*/"	yy_pop_state();
}

";" {
	printf("END OF THE LINE\n");
}

"+" {
	printf("PLUS\n");
}

"-" {
	printf("MINUS\n");
}

"/" {
	printf("DIVIDE\n");
}

"*" {
	printf("MULTIPLY\n");
}

"=" {
	printf("ASSIGN\n");
}

">" {
	printf("MORE\n");
}

"<" {
	printf("LESS\n");
}

">=" {
	printf("MORE OR EQUAL\n");
}

"<=" {
	printf("LESS OR EQUAL\n");
}

"==" {
	printf("EQUAL\n");
}

"!=" {
	printf("NOT EQUAL\n");
}

"{" {
	printf("OPEN BLOCK\n");
}

"}" {
	printf("CLOSE BLOCK\n");
}

"(" {
	printf("OPEN BRACKET\n");
}

")" {
	printf("CLOSE BRACKET\n");
}

%%
int main (int argc, char** argv) {
	if (argc < 2)
	{
		perror("There is no input file\n");
	return 1;
	}

	yyin = fopen(argv[1], "r");
	if (yyin == NULL)
	{
		perror(argv[1]);
		return 1;
	}
	filename = strdup(argv[1]);
	yylineno = 1;																																							
	yylex();
	return 0;
}


