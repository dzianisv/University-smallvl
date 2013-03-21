all: flex bin

flex:
	flex lex.l

bin:
	$(CC) lex.yy.c -lfl -o lex_analizator