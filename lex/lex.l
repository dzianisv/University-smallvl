%{
#include <stdio.h>
#include <string.h>
char * filename;
int yycolumn = 0;

#define LINE printf("%s:%d:%d \t%s\t", filename, yylineno, yycolumn, yytext); yycolumn+=yyleng;
%}

%option yylineno
%option stack
%x SINGLE_LINE_COMMENT
%x MULTI_LINE_COMMENT
%x STRING_DEFINITION

letter [a-zA-Z]
digit [0-9]

%%

"import" {
	LINE;
	printf("IMPORT\n");
}

"function" {
	LINE;
	printf("FUNCTION\n");
}

"while" {
	LINE;
	printf("WHILE\n");
}


"$" {
	LINE;
	printf("VAR_BEGIN\n");
}

"if" {
	LINE;
	printf("IF\n");
}

"else" {
	LINE;
	printf("ELSE\n");
}

"for" {
	LINE;
	printf("FOR\n");
}

array[{digit}*] {
	LINE;
	printf("ARRAY_INITIALIZATION\n");
}


({letter})* {
	LINE;
	printf("IDENTIFIER\n");
}
 

{digit}+ {
	LINE;
	printf("NUMBER\n");
}

\".*\"			{
	LINE;
	printf("STRING_DEFINITION\n");
}



"//"	yy_push_state(SINGLE_LINE_COMMENT);
<SINGLE_LINE_COMMENT>{
	[^\n]*	|
	"\n"	{
		yy_pop_state(); 

	}
}

"/*" 				yy_push_state(MULTI_LINE_COMMENT);
<MULTI_LINE_COMMENT>{
[^*]*		|
"*"+[^/]	|
"*/"	yy_pop_state();
}

";" {
	LINE;
	printf("END_OF_THE_INSTRUCTION\n");
}

,
 {
	LINE;
	printf("ARG_SPLITTER\n");
}

"+" {
	LINE;
	printf("PLUS\n");
}

"-" {
	LINE;
	printf("MINUS\n");
}

"/" {
	LINE;
	printf("DIVIDE\n");
}

"*" {
	LINE;
	printf("MULTIPLY\n");
}

"=" {
	LINE;
	printf("ASSIGN\n");
}

">" {
	LINE;
	printf("MORE\n");
}

"<" {
	LINE;
	printf("LESS\n");
}

">=" {
	LINE;
	printf("MORE_OR_EQUAL\n");
}

"<=" {
	LINE;
	printf("LESS_OR_EQUAL\n");
}

"==" {
	LINE;
	printf("EQUAL\n");
}

"!=" {
	LINE;
	printf("NOT_EQUAL\n");
}

"{" {
	LINE;
	printf("OPEN_BLOCK\n");
}

"}" {
	LINE;
	printf("CLOSE_BLOCK\n");
}

"(" {
	LINE;
	printf("OPEN_BRACKET\n");
}

")" {
	LINE;
	printf("CLOSE_BRACKET\n");
}

"." {
	LINE;
	printf("STRING_CONCETATE\n");
}

. {
	yycolumn++;
}

\n {
	yycolumn=1;
}

%%
int main (int argc, char** argv) {
	if (argc < 2)
	{
		perror("There is no input file\n");
	return -1;
	}

	yyin = fopen(argv[1], "r");
	if (yyin == NULL)
	{
		perror(argv[1]);
		return -2;
	}

	filename = strdup(argv[1]);
	yylineno = 1;																																			
	yylex();

	return 0;
}


