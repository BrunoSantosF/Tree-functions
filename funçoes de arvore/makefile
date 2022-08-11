make : 
	@gcc -c *.c
	@gcc -o prog *.o
	@./prog 
clean : 
	@rm *.o prog
val :
	@valgrind ./prog
	
