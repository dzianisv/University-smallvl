all:
	$(MAKE) -C lex
	$(MAKE) -C bison
	$(MAKE) -C final
	
clean:
	$(MAKE) -C lex clean
	$(MAKE) -C bison clean
	$(MAKE) -C final clean