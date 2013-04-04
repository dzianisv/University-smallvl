%{
#include <stdio.h>
#include <string.h>
 
void yyerror(const char *str)
{
        fprintf(stderr,"ошибка: %s\n",str);
}
 
int yywrap()
{
        return 1;
} 
  
main()
{
        yyparse();
} 

%}

%token IMPORT FUNCTION WHILE VAR_BEGIN IF ELSE FOR ARRAY_INITIALIZATION 
%token IDENTIFIER NUMBER STRING_DEFINITION END_INSTRUCTION ARG_SPLITTER 
%token PLUS MINUS DIVIDE MULTIPLY ASSIGN MORE LESS MORE_OR_EQUAL LESS_OR_EQUAL EQUAL NOT_EQUAL
%token OPEN_BLOCK CLOSE_BLOCK OPEN_BRACKET CLOSE_BRACKET STRING_CONCETATE RETURN INCLUDE

%%
commands: /* empty */
        | commands command
        ;	
		
variable:
		VAR_BEGIN IDENTIFIER
		;
		
arguments: /* empty */
        | variable ARG_SPLITTER arguments
		| variable
        ;
		
any_variable:
		IDENTIFIER 
		| 
		function_call 
		| 
		variable 
		| 
		STRING_DEFINITION
		;
		
string_variable:
		STRING_DEFINITION 
		| 
		variable
		;

command:
        function_declaration
		|
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
        ;
		
block: OPEN_BLOCK commands CLOSE_BLOCK;

function_declaration:
		FUNCTION IDENTIFIER OPEN_BRACKET arguments CLOSE_BRACKET
        {
                printf("функция %s\n", $2);
        }
        ;
		
function_call:
		IDENTIFIER OPEN_BRACKET arguments CLOSE_BRACKET END_INSTRUCTION
        {
                printf("Вызов функции %s\n", $1);
        }
        ;
		
assign_value:
		VAR_BEGIN IDENTIFIER ASSIGN any_variable
        {
                printf("Присвоение значения переменной\n");
        }
        ;
		
string_concetate:
		variable STRING_CONCETATE string_variable
        {
                printf("Конкатенация строк\n");
        }
        ;
return_value:
		RETURN any_variable
        {
                printf("возврат значения из функции\n");
        }
        ;
		
loop_for:
		FOR OPEN_BRACKET variable ASSIGN NUMBER END_INSTRUCTION variable LESS NUMBER END_INSTRUCTION variable PLUS PLUS CLOSE_BRACKET
		{
				printf("Цикл for\n");
		}
		;
		
include:
		INCLUDE STRING_DEFINITION
		{
				printf("%s", $2);
		}
		;