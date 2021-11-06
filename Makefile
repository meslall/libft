FILE = ft_memmove.c ft_memcpy.c

default: program

program:
	gcc $(FILE) -o a.out

clean:
	-rm -f program.o
	-rm -f program