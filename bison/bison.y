%{
#include <stdio.h>
#include <string.h>
#include  "analizator.h"

void yyerror(const char *str)
{
        fprintf(stderr,"Parse error: %s in %s\n",str, yytext);
}
 
%}

%token FUNCTION WHILE VAR_BEGIN IF ELSE FOR ARRAY_INITIALIZATION 
%token IDENTIFIER NUMBER STRING_DEFINITION END_INSTRUCTION ARG_SPLITTER 
%token PLUS MINUS DIVIDE MULTIPLY ASSIGN MORE LESS MORE_OR_EQUAL LESS_OR_EQUAL EQUAL NOT_EQUAL
%token OPEN_BLOCK CLOSE_BLOCK OPEN_BRACKET CLOSE_BRACKET STRING_CONCETATE RETURN INCLUDE REQUIRE

%%
commands: command END_INSTRUCTION
        | commands command END_INSTRUCTION
        | commands function_declaration block
        ;	
		
command:
			block
        |
			function_call
		|
			assign_value
		|
			string_concetate
		|
			return_value
		|
			loop_for
		|
			include
		|
			require
        ;		
		
block: OPEN_BLOCK commands CLOSE_BLOCK 
			{
				printf("Logical block opened\n");
			}
			;

function_declaration:
		FUNCTION IDENTIFIER OPEN_BRACKET arguments CLOSE_BRACKET
        {
                printf("Function  %s declaration\n", $2);
        }
        ;
		
arguments: /* empty */
        | value ARG_SPLITTER arguments
		| value
        ;
				
value:
			VAR_BEGIN IDENTIFIER 
		| 
			function_call 
		| 
			STRING_DEFINITION
		|
			NUMBER
		;

		
function_call:
		IDENTIFIER OPEN_BRACKET arguments CLOSE_BRACKET
        {
                printf("calling function %s\n", $1);
        }
        ;
		
assign_value:
		VAR_BEGIN IDENTIFIER ASSIGN value
        {
                printf("Assignment %s = %s \n", $2, $4);
        }
        ;
		
string_concetate:
		value STRING_CONCETATE value
        {
                printf("%s concetate %s\n", $1, $3);
        }
        ;
        
return_value:
		RETURN value
        {
                printf(" return value %s from function\n", $1);
        }
        ;
		
loop_for:
		FOR OPEN_BRACKET value ASSIGN NUMBER END_INSTRUCTION logical END_INSTRUCTION command CLOSE_BRACKET
		{
				printf("Cycle for for\n");
		}
		;
		
include:
		INCLUDE value
		{
				printf("including file %s\n", $1);
		}
		;

require:
		REQUIRE value
		{
				printf("require file %s\n", $1);
		}
		;

logical_signs:


logical:
	 value logical_signs value;
	
