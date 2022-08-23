make :
	@gcc -c *.c
	@gcc -o prog *.o
run :
	@./prog entrada.txt
	@./prog entrada.txt > saida.txt 
	
clean :
	@rm -rf *.o prog
val :
	@valgrind ./prog