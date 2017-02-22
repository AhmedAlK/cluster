cc = gcc
std = c11
name = cluster
lib = lib$(name).so

build: $(name).o
	$(cc) -shared -fpic -std=$(std) -o $(lib) $(name).o

$(name).o: $(name).c
	$(cc) -c $(name).c

clean:
	@rm -f $(lib)
	@rm -f $(name).o

