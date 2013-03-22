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
	printf("ARRAY INITIALIZATION\n");
}


({letter})* {
	LINE;
	printf("IDENTIFIER\n");
}
 

{digit}+ {
	LINE;
	printf("NUMBER\n");
}

"//"			yy_push_state(SINGLE_LINE_COMMENT);
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
	printf("END OF THE INSTRUCTION\n");
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
	printf("MORE OR EQUAL\n");
}

"<=" {
	LINE;
	printf("LESS OR EQUAL\n");
}

"==" {
	LINE;
	printf("EQUAL\n");
}

"!=" {
	LINE;
	printf("NOT EQUAL\n");
}

"{" {
	LINE;
	printf("OPEN BLOCK\n");
}

"}" {
	LINE;
	printf("CLOSE BLOCK\n");
}

"(" {
	LINE;
	printf("OPEN BRACKET\n");
}

")" {
	LINE;
	printf("CLOSE BRACKET\n");
}

"." {
	LINE;
	printf("STRING CONCETATE\n");
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


