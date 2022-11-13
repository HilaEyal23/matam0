FLAGS = -std=c99 -Wall -pedantic-errors -Werror -g3
TARGET = mtm_tot

mtm_tot: part1.o
	gcc -g $(FLAGS) part1.o -o mtm_tot

part1.o: part1.c
	gcc -c $(FLAGS) part1.c -o part1.o

clean:
	rm -f *.o *~ $(TARGET)
