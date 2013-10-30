
EXE = test
OBJ = main.o

INCS = 
LIBS = 

CXXFLAGS = -Wall -pipe -g -std=c++0x -DDEBUG

$(EXE): $(OBJ)
	g++ -o $(EXE) $(OBJ) $(CXXFLAGS) $(LIBS)

%.o: %.cc
	g++ -c -o $@ $< $(CXXFLAGS) $(INCS)

.PHONY: clean purge install
clean:
	@rm -f core.* $(OBJ)
purge:
	@rm -f core.* $(OBJ) $(EXE)
install:
	install -m 755 $(EXE) /usr/local/bin
