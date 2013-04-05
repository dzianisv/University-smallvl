%{
#include <stdio.h>
#include <string.h>
#include "bison.tab.h"
int yycolumn = 0;
%}

%option yylineno
%option stack
%x SINGLE_LINE_COMMENT
%x MULTI_LINE_COMMENT

letter [a-zA-Z]
digit [0-9]

%%

"include" {
		return INCLUDE;
}

"require"  {
		return REQUIRE;
}

"return"  {
	return RETURN;
}

"function" {
	return FUNCTION;
}

"while" {
	return WHILE;
}


"$" {
	return VAR_BEGIN;
}

"if" {
	return IF;
}

"else" {
	return ELSE;
}

"for" {
	return FOR;
}

array({digit}*) {
	
}


({letter})* {
	return IDENTIFIER;
}
 

{digit}+ {
	return NUMBER;
}

\"([^"]|\\\")*\"			{
	return STRING_DEFINITION;
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
	return END_INSTRUCTION;
}

"," {
	return ARG_SPLITTER;
}

"+" {
	return  PLUS;
}

"-" {
	return MINUS;
}

"/" {
	return DIVIDE;
}

"*" {
	return MULTIPLY;
}

"=" {
	return ASSIGN;
}

">" {
	return MORE;
}

"<" {
	return LESS;
}

">=" {
	return MORE_OR_EQUAL;
}

"<=" {
	return LESS_OR_EQUAL;
}

"==" {
	return EQUAL;
}

"!=" {
	return NOT_EQUAL;
}

"{" {
	return OPEN_BLOCK;
}

"}" {
	return CLOSE_BLOCK;
}

"(" {
	return OPEN_BRACKET;
}

")" {
	return CLOSE_BRACKET;
}

"." {
	return STRING_CONCETATE;
}

. {
	yycolumn++;
}

\n {
	yycolumn=1;
}

%%



