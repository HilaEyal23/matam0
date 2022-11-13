FLAGS = -std=c99 -Wall -pedantic-errors -Werror -g3
TERGET = mtm_buggy

mtm_buggy: mtm_buggy.o
	gcc -g $(FLAGS) mtm_buggy.o -o mtm_buggy

mtm_buggy.o: mtm_buggy.c
	gcc -c $(FLAGS) mtm_buggy.c -o mtm_buggy.o

clean:
	rm -f *.o *~ $(TARGET)
