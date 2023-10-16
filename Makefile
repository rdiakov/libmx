all: libmx

libmx:
	@clang -c -std=c11 inc/*.h src/*.c -Wall -Wextra -Wpedantic -Werror 
	@mkdir obj
	@mv *.o obj
	@ar -rc libmx.a obj/*.o
	@ranlib libmx.a

uninstall: clean
	@rm -f libmx.a

clean:
	@rm -f inc/*.gch
	@rm -rdf obj

reinstall: uninstall libmx
