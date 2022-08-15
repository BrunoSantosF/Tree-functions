run: clear main
	@ ./prog

val: clear main
	@ valgrind ./prog

main: aluno hashgen
	@ gcc -o prog Aluno.o TadHashGen.o main.c

aluno:
	@ gcc -c Aluno.c

hashgen:
	@ gcc -c TadHashGen.c

clear:
	@ rm -rf *.o prog