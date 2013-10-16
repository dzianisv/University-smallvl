SRCS := main.cpp lex.yy.cpp bison.tab.cpp acs.cpp runtime.cpp heap_manager.cpp funcaller.cpp dynamic_types.cpp
OBJS := $(patsubst %.cpp,%.o,$(SRCS))


svl: $(OBJS)
	$(CXX) --std=c++11 $(OBJS)   -lfl -ldl -o $@ 

%.o: %.cpp
	$(CXX) --std=c++11 -c $< -o $@ 
clean:
	rm *.o
	rm svl

dist-clean: clean
	rm *.o
	