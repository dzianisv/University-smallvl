all:
	cp lex/lex.yy.c final/
	cp bison/*.c final/
	cp bison/*.h final/
	cd final 
	make